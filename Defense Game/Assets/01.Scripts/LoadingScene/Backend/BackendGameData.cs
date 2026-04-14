using System.Collections.Generic;
using UnityEngine;
using BackEnd;
using LitJson;
using BackendData;

/// <summary>
/// 백엔드 게임 데이터 로드 / 저장 / 생성 담당
/// 게임플레이 로직은 BackendGameDataHelper에서 처리
/// </summary>
public class BackendGameData : MonoBehaviour
{
    private const string TableName = "player_info";

    // 외부에서 읽기 전용 접근 허용, 수정은 이 클래스 또는 Helper를 통해서만
    public PlayerData Player { get; private set; } = new PlayerData();
    public List<CharacterData> CharacterList { get; private set; } = new List<CharacterData>();
    public List<InventoryItem> InventoryList { get; private set; } = new List<InventoryItem>();

    #region Public API

    /// <summary>내 데이터 조회. 없으면 초기 데이터 자동 생성.</summary>
    public void LoadMyData()
    {
        Debug.Log("[BackendGameData] 데이터 조회 시작");

        var bro = Backend.GameData.GetMyData(TableName, new Where());

        if (!bro.IsSuccess())
        {
            Debug.LogError($"[BackendGameData] 데이터 조회 실패: {bro}");
            return;
        }

        JsonData rows = bro.GetReturnValuetoJSON()["rows"];

        if (rows.Count <= 0)
        {
            Debug.Log("[BackendGameData] 저장된 데이터 없음 → 초기 데이터 생성");
            CreateMyData();
            return;
        }

        ParseRowData(rows[0]);
        Debug.Log($"[BackendGameData] 로드 완료 | gold={Player.gold}, level={Player.level}, stage={Player.stage}");
        Debug.Log($"[BackendGameData] 캐릭터 수: {CharacterList.Count}, 아이템 수: {InventoryList.Count}");

        OnDataLoaded();
    }

    /// <summary>현재 데이터를 서버에 저장.</summary>
    public void SaveMyData()
    {
        if (string.IsNullOrEmpty(Player.rowInDate))
        {
            Debug.LogWarning("[BackendGameData] rowInDate 없음 → 저장 불가. LoadMyData를 먼저 호출하세요.");
            return;
        }

        Param param = BuildParam();
        var bro = Backend.GameData.UpdateV2(TableName, Player.rowInDate, Backend.UserInDate, param);

        if (bro.IsSuccess())
            Debug.Log("[BackendGameData] 저장 성공");
        else
            Debug.LogError($"[BackendGameData] 저장 실패: {bro}");
    }

    #endregion

    #region Private — 파싱

    private void ParseRowData(JsonData row)
    {
        // BackEnd SDK는 숫자를 { "N": "값" }, 문자열을 { "S": "값" } 형태로 반환
        if (row.Keys.Contains("gold"))
            Player.gold = ParseInt(row["gold"]);

        if (row.Keys.Contains("level"))
            Player.level = ParseInt(row["level"]);

        if (row.Keys.Contains("stage"))
            Player.stage = ParseInt(row["stage"]);

        if (row.Keys.Contains("inDate"))
            Player.rowInDate = row["inDate"]["S"].ToString();

        if (row.Keys.Contains("characters"))
        {
            string json = row["characters"]["S"].ToString();
            var wrapper = JsonUtility.FromJson<CharacterListWrapper>(json);
            CharacterList = wrapper?.characters ?? new List<CharacterData>();
        }

        if (row.Keys.Contains("inventory"))
        {
            string json = row["inventory"]["S"].ToString();
            var wrapper = JsonUtility.FromJson<InventoryListWrapper>(json);
            InventoryList = wrapper?.items ?? new List<InventoryItem>();
        }
    }

    /// <summary>BackEnd SDK 숫자 응답은 { "N": "123" } 형태</summary>
    private int ParseInt(JsonData field)
    {
        if (field.Keys.Contains("N"))
            return int.Parse(field["N"].ToString());

        // 폴백: 예전 방식 또는 직접 값인 경우
        return int.Parse(field[0].ToString());
    }

    #endregion

    #region Private — 생성 / 저장 보조

    private void CreateMyData()
    {
        // 기본 캐릭터 & 아이템 세팅
        var charWrapper = new CharacterListWrapper();
        charWrapper.characters.Add(new CharacterData { characterId = 1, level = 1 });

        var invenWrapper = new InventoryListWrapper();
        invenWrapper.items.Add(new InventoryItem { itemId = 101, count = 5 });

        Param param = new Param();
        param.Add("gold", 100);
        param.Add("level", 1);
        param.Add("stage", 1);
        param.Add("characters", JsonUtility.ToJson(charWrapper));
        param.Add("inventory", JsonUtility.ToJson(invenWrapper));

        var bro = Backend.GameData.Insert(TableName, param);

        if (bro.IsSuccess())
        {
            Debug.Log("[BackendGameData] 초기 데이터 생성 성공");

            Player.gold  = 100;
            Player.level = 1;
            Player.stage = 1;
            CharacterList = charWrapper.characters;
            InventoryList = invenWrapper.items;

            // Insert 후 rowInDate 획득
            Player.rowInDate = bro.GetReturnValuetoJSON()["inDate"]["S"].ToString();

            OnDataLoaded();
        }
        else
        {
            Debug.LogError($"[BackendGameData] 초기 데이터 생성 실패: {bro}");
        }
    }

    private Param BuildParam()
    {
        var charWrapper  = new CharacterListWrapper  { characters = CharacterList };
        var invenWrapper = new InventoryListWrapper  { items      = InventoryList };

        Param param = new Param();
        param.Add("gold",      Player.gold);
        param.Add("level",     Player.level);
        param.Add("stage",     Player.stage);
        param.Add("characters", JsonUtility.ToJson(charWrapper));
        param.Add("inventory",  JsonUtility.ToJson(invenWrapper));
        return param;
    }

    #endregion

    #region 콜백

    /// <summary>데이터 로드/생성 완료 후 호출. 씬 전환 등 후처리 작성.</summary>
    private void OnDataLoaded()
    {
        Debug.Log("[BackendGameData] 로비 진입 가능");
        // SceneManager.LoadScene("LobbyScene");
    }

    #endregion
}
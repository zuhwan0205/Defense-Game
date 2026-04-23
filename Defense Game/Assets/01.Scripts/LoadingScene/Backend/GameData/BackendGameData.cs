using UnityEngine;
using BackEnd;
using LitJson;
using BackendData;

public class BackendGameData : MonoBehaviour
{
    private const string TableName = "player_info";

    public PlayerData Player { get; private set; } = new PlayerData();

    [SerializeField] private BackendInventory inventory;
    [SerializeField] private BackendMercenary mercenary;
    [SerializeField] private BackendSDK backendSDK;


    #region Load

    public void LoadMyData()
    {
        Debug.Log("[BackendGameData] 데이터 조회 시작");

        if (!LoadPlayerData())    return;
        backendSDK.ReportProgress(0.7f);
        if (!LoadItemData())      return;
        backendSDK.ReportProgress(0.85f);
        if (!LoadMercenaryData()) return;
        backendSDK.ReportProgress(1f);

        OnDataLoaded();
    }

// ── 플레이어 ──────────────────────────────────────────────
    private bool LoadPlayerData()
    {
        var bro = Backend.GameData.GetMyData(TableName, new Where());

        if (!bro.IsSuccess())
        {
            Debug.LogError($"[BackendGameData] 플레이어 데이터 조회 실패: {bro}");
            return false;
        }

        JsonData rows = bro.GetReturnValuetoJSON()["rows"];

        if (rows.Count <= 0)
        {
            Debug.Log("[BackendGameData] 플레이어 데이터 없음 → 생성");
            return CreatePlayerData();
        }

        return ParseRowData(rows[0]);
        
    }

// ── 아이템(인벤토리) ──────────────────────────────────────
    private bool LoadItemData()
    {
        inventory.InitializeInventoryIfNeeded();

        if (!inventory.LoadInventory())
        {
            Debug.LogError("[BackendGameData] 인벤토리 로드 실패");
            return false;
        }

        return true;
    }

// ── 용병대 ────────────────────────────────────────────────
    private bool LoadMercenaryData()
    {
        mercenary.InitializeMercenaryIfNeeded();

        if (!mercenary.LoadMercenary())
        {
            Debug.LogError("[BackendGameData] 용병대 로드 실패");
            return false;
        }

        return true;
    }

    #endregion

    #region Parse

    private bool ParseRowData(JsonData row)
    {
        try
        {
            if (row.Keys.Contains("gold"))
                Player.gold = int.Parse(row["gold"]["N"].ToString());

            if (row.Keys.Contains("level"))
                Player.level = int.Parse(row["level"]["N"].ToString());

            if (row.Keys.Contains("stage"))
                Player.stage = int.Parse(row["stage"]["N"].ToString());

            if (row.Keys.Contains("inDate"))
                Player.rowInDate = row["inDate"]["S"].ToString();

            return true;
        }
        catch (System.Exception e)
        {
            Debug.LogError($"[BackendGameData] Parse 실패: {e}");
            return false;
        }
    }

    #endregion

    #region Create

    private bool CreatePlayerData()
    {
        Debug.Log("[BackendGameData] 초기 데이터 생성 시작");

        Param param = new Param();
        param.Add("gold", 100);
        param.Add("level", 1);
        param.Add("stage", 1);

        var bro = Backend.GameData.Insert(TableName, param);

        if (!bro.IsSuccess())
        {
            Debug.LogError("[BackendGameData] player_info 생성 실패");
            return false;
        }

        // 👉 Player 데이터 세팅
        try
        {
            Player.gold = 100;
            Player.level = 1;
            Player.stage = 1;
            Player.rowInDate = bro.GetReturnValuetoJSON()["inDate"]["S"].ToString();
        }
        catch (System.Exception e)
        {
            Debug.LogError($"[BackendGameData] Player 데이터 파싱 실패: {e}");
            return false;
        }

        // 🔥 1. 인벤토리 초기화
        inventory.InitializeInventoryIfNeeded();

        if (!inventory.LoadInventory())
        {
            Debug.LogError("[BackendGameData] 인벤토리 초기 로드 실패");
            return false;
        }

        // 🔥 2. 용병 초기화
        mercenary.InitializeMercenaryIfNeeded();

        if (!mercenary.LoadMercenary())
        {
            Debug.LogError("[BackendGameData] 용병대 초기 로드 실패");
            return false;
        }

        Debug.Log("[BackendGameData] 초기 데이터 생성 완료");

        OnDataLoaded();
        return true;
    }

    

    #endregion

    private void OnDataLoaded()
    {
        Debug.Log("[BackendGameData] 로비 진입 가능");
        // SceneManager.LoadScene("LobbyScene");
    }
}

using UnityEngine;
using BackEnd;
using LitJson;

public class BackendGameData : MonoBehaviour
{
    [Header("로컬 캐시")]
    public int gold = 0;
    public int level = 1;
    public int stage = 1;

    private const string tableName = "player_info";

    private string rowInDate = string.Empty;

    public void LoadMyData()
    {
        Debug.Log("내 데이터 조회 시작");
        Debug.Log("현재 조회할 테이블명 : " + tableName);

        var bro = Backend.GameData.GetMyData(tableName, new Where());

        if (!bro.IsSuccess())
        {
            Debug.LogError("데이터 조회 실패 : " + bro);
            return;
        }

        JsonData rows = bro.GetReturnValuetoJSON()["rows"];

        if (rows.Count <= 0)
        {
            Debug.Log("저장된 데이터가 없음 -> 초기 데이터 생성");
            CreateMyData();
            return;
        }

        JsonData row = rows[0];

        if (row.Keys.Contains("gold"))
            gold = int.Parse(row["gold"][0].ToString());

        if (row.Keys.Contains("level"))
            level = int.Parse(row["level"][0].ToString());

        if (row.Keys.Contains("stage"))
            stage = int.Parse(row["stage"][0].ToString());

        if (row.Keys.Contains("inDate"))
            rowInDate = row["inDate"][0].ToString();

        Debug.Log($"데이터 로드 완료 / gold={gold}, level={level}, stage={stage}");

        EnterLobby();
    }

    public void CreateMyData()
    {
        Param param = new Param();
        param.Add("gold", 100);
        param.Add("level", 1);
        param.Add("stage", 1);

        var bro = Backend.GameData.Insert(tableName, param);

        if (bro.IsSuccess())
        {
            Debug.Log("초기 데이터 생성 성공 : " + bro);

            gold = 100;
            level = 1;
            stage = 1;

            EnterLobby();
        }
        else
        {
            Debug.LogError("초기 데이터 생성 실패 : " + bro);
        }
    }

    public void SaveMyData()
    {
        if (string.IsNullOrEmpty(rowInDate))
        {
            Debug.LogWarning("rowInDate가 비어 있어 저장할 수 없습니다.");
            return;
        }

        Param param = new Param();
        param.Add("gold", gold);
        param.Add("level", level);
        param.Add("stage", stage);

        var bro = Backend.GameData.UpdateV2(tableName, rowInDate, Backend.UserInDate, param);

        if (bro.IsSuccess())
        {
            Debug.Log("데이터 저장 성공 : " + bro);
        }
        else
        {
            Debug.LogError("데이터 저장 실패 : " + bro);
        }
    }

    private void EnterLobby()
    {
        Debug.Log("로비 진입 가능 상태");
        // SceneManager.LoadScene("LobbyScene");
    }
}
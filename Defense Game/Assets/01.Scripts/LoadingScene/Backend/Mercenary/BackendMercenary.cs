using System.Collections.Generic;
using UnityEngine;
using BackEnd;
using LitJson;

public class BackendMercenary : MonoBehaviour
{
    private const string TableName = "mercenary";

    public List<MercenaryData> Mercenaries { get; private set; } = new List<MercenaryData>();
    
    public JsonData FetchRows()
    {
        var bro = Backend.GameData.GetMyData(TableName, new Where());
 
        if (!bro.IsSuccess())
        {
            Debug.LogError($"[Mercenary] rows 조회 실패: {bro}");
            return null;
        }
 
        return bro.GetReturnValuetoJSON()["rows"];
    }

    #region Load

    public bool LoadMercenary(JsonData rows)
    {
        Debug.Log("[Mercenary] 로드 시작");
 
        try
        {
            Mercenaries.Clear();
 
            for (int i = 0; i < rows.Count; i++)
            {
                var row = rows[i];
 
                MercenaryData data = new MercenaryData
                {
                    inDate      = row["inDate"]["S"].ToString(),
                    characterId = int.Parse(row["characterId"]["N"].ToString()),
                    level       = row.Keys.Contains("level")
                        ? int.Parse(row["level"]["N"].ToString())
                        : 1,
                    grade       = row.Keys.Contains("grade")
                        ? int.Parse(row["grade"]["N"].ToString())
                        : 0,
                    shardCount  = row.Keys.Contains("shardCount")
                        ? int.Parse(row["shardCount"]["N"].ToString())
                        : 0
                };
 
                Mercenaries.Add(data);
            }
 
            Debug.Log($"[Mercenary] 로드 완료: {Mercenaries.Count}개");
            return true;
        }
        catch (System.Exception e)
        {
            Debug.LogError($"[Mercenary] 파싱 실패: {e}");
            return false;
        }
    }

    #endregion

    #region Init (최초 생성)

    public bool InitializeMercenary()
    {
        Debug.Log("[Mercenary] 최초 생성 진행");
 
        for (int i = 1; i <= 10; i++)
        {
            Param param = new Param();
            param.Add("characterId", i);
            param.Add("level",       1);
            param.Add("grade",       0);
            param.Add("shardCount",  0);
 
            var insertBro = Backend.GameData.Insert(TableName, param);
 
            if (!insertBro.IsSuccess())
            {
                // 수정 2 : return 대신 false 반환으로 실패를 상위에 전파합니다.
                //          이전 코드는 void 였기 때문에 부분 생성 후 조용히 종료됐습니다.
                Debug.LogError($"[Mercenary] 생성 실패 (characterId: {i}): {insertBro}");
                return false;
            }
        }
 
        Debug.Log("[Mercenary] 최초 생성 완료");
        return true;
    }

    #endregion

    #region Update (기본 저장)

    public void SaveMercenary(MercenaryData data)
    {
        Param param = new Param();
        param.Add("level", data.level);
        param.Add("grade", data.grade);
        param.Add("shardCount", data.shardCount);

        var bro = Backend.GameData.UpdateV2(
            TableName,
            data.inDate,
            Backend.UserInDate,
            param
        );

        if (!bro.IsSuccess())
        {
            Debug.LogError($"[Mercenary] 저장 실패: characterId={data.characterId}");
        }
    }

    #endregion
}

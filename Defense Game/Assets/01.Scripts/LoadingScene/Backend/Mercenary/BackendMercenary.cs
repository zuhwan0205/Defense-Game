using System.Collections.Generic;
using UnityEngine;
using BackEnd;
using LitJson;

public class BackendMercenary : MonoBehaviour
{
    private const string TableName = "mercenary";

    public List<MercenaryData> Mercenaries { get; private set; } = new List<MercenaryData>();

    #region Load

    public bool LoadMercenary()
    {
        Debug.Log("[Mercenary] 로드 시작");

        var bro = Backend.GameData.GetMyData(TableName, new Where());

        if (!bro.IsSuccess())
        {
            Debug.LogError($"[Mercenary] 로드 실패: {bro}");
            return false;
        }

        try
        {
            JsonData rows = bro.GetReturnValuetoJSON()["rows"];
            Mercenaries.Clear();

            for (int i = 0; i < rows.Count; i++)
            {
                var row = rows[i];

                MercenaryData data = new MercenaryData
                {
                    inDate = row["inDate"]["S"].ToString(),
                    characterId = int.Parse(row["characterId"]["N"].ToString()),
                    level = row.Keys.Contains("level") 
                            ? int.Parse(row["level"]["N"].ToString()) 
                            : 1,
                    grade = row.Keys.Contains("grade") 
                            ? int.Parse(row["grade"]["N"].ToString()) 
                            : 0,
                    shardCount = row.Keys.Contains("shardCount") 
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

    public void InitializeMercenaryIfNeeded()
    {
        var bro = Backend.GameData.GetMyData(TableName, new Where());

        if (!bro.IsSuccess())
        {
            Debug.LogError("[Mercenary] 존재 여부 확인 실패");
            return;
        }

        JsonData rows = bro.GetReturnValuetoJSON()["rows"];

        if (rows.Count > 0)
        {
            Debug.Log("[Mercenary] 이미 존재 → 생성 스킵");
            return;
        }

        Debug.Log("[Mercenary] 최초 생성 진행");

        for (int i = 1; i <= 10; i++)
        {
            Param param = new Param();
            param.Add("characterId", i);
            param.Add("level", 1);
            param.Add("grade", 0);
            param.Add("shardCount", 0);

            var insertBro = Backend.GameData.Insert(TableName, param);

            if (!insertBro.IsSuccess())
            {
                Debug.LogError($"[Mercenary] 생성 실패 (characterId: {i})");
                return;
            }
        }
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

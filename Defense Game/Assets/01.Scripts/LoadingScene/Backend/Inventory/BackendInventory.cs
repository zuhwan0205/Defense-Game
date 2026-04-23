using System.Collections.Generic;
using UnityEngine;
using BackEnd;
using LitJson;

public class BackendInventory : MonoBehaviour
{
    private const string TableName = "inventory";

    public List<InventoryItemData> Items { get; private set; } = new List<InventoryItemData>();
    
    public JsonData FetchRows()
    {
        var bro = Backend.GameData.GetMyData(TableName, new Where());
 
        if (!bro.IsSuccess())
        {
            Debug.LogError($"[Inventory] rows 조회 실패: {bro}");
            return null;
        }
 
        return bro.GetReturnValuetoJSON()["rows"];
    }

    #region Load

    public bool LoadInventory(JsonData rows)
    {
        Debug.Log("[Inventory] 로드 시작");
 
        try
        {
            Items.Clear();
 
            for (int i = 0; i < rows.Count; i++)
            {
                var row = rows[i];
 
                InventoryItemData item = new InventoryItemData
                {
                    inDate     = row["inDate"]["S"].ToString(),
                    itemId     = int.Parse(row["itemId"]["N"].ToString()),
                    grade      = row.Keys.Contains("grade")
                        ? int.Parse(row["grade"]["N"].ToString())
                        : 0,
                    shardCount = row.Keys.Contains("shardCount")
                        ? int.Parse(row["shardCount"]["N"].ToString())
                        : 0
                };
 
                Items.Add(item);
            }
 
            Debug.Log($"[Inventory] 로드 완료: {Items.Count}개");
            return true;
        }
        catch (System.Exception e)
        {
            Debug.LogError($"[Inventory] 파싱 실패: {e}");
            return false;
        }
    }

    #endregion

    #region Init (최초 1회 생성)

    public bool InitializeInventory()
    {
        Debug.Log("[Inventory] 최초 생성 진행");
 
        for (int i = 1; i <= 10; i++)
        {
            Param param = new Param();
            param.Add("itemId",     i);
            param.Add("grade",      0);
            param.Add("shardCount", 0);
 
            var insertBro = Backend.GameData.Insert(TableName, param);
 
            if (!insertBro.IsSuccess())
            {
                Debug.LogError($"[Inventory] 생성 실패 (itemId: {i}): {insertBro}");
                return false;
            }
        }
 
        Debug.Log("[Inventory] 최초 생성 완료");
        return true;
    }

    #endregion

    #region Update (저장)

    public void SaveItem(InventoryItemData item)
    {
        Param param = new Param();
        param.Add("grade", item.grade);
        param.Add("shardCount", item.shardCount);

        var bro = Backend.GameData.UpdateV2(
            TableName,
            item.inDate,
            Backend.UserInDate,
            param
        );

        if (!bro.IsSuccess())
        {
            Debug.LogError($"[Inventory] 저장 실패: itemId={item.itemId}");
        }
    }

    #endregion
}

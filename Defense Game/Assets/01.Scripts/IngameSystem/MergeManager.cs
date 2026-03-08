using System.Collections.Generic;
using UnityEngine;

public class MergeManager : MonoBehaviour
{
    [System.Serializable]
    public class UnitPrefabInfo
    {
        public int unitID;
        public int tier;
        public GameObject prefab;
    }

    [SerializeField] private UnitSpawner unitSpawner;
    [SerializeField] private List<UnitPrefabInfo> unitPrefabs = new List<UnitPrefabInfo>();
    [SerializeField] private int maxTier = 2;

    void OnEnable()
    {
        IngameEvent.OnClickMergeButton += OnClickCombine;
    }

    void OnDisable()
    {
        IngameEvent.OnClickMergeButton -= OnClickCombine;
    }

    public void OnClickCombine()
    {
        bool merged = TryMerge();

        if (!merged) Debug.Log("조합 가능한 유닛이 없습니다.");
    }

    private bool TryMerge()
    {
        Dictionary<string, List<GameObject>> groups = new Dictionary<string, List<GameObject>>();

        foreach (Tile tile in unitSpawner.Tiles)
        {
            if (tile == null || !tile.IsUnitSpawned) continue;

            GameObject unitObj = tile.CurrentUnit;
            UnitBase unitData = unitObj.GetComponent<UnitBase>();

            if (unitData == null)
            {
                Debug.LogWarning($"{unitObj.name} 에 UnitData가 없습니다.");
                continue;
            }

            if (unitData.tier >= maxTier) continue;

            string key = $"{unitData.unitID}_{unitData.tier}";

            if (!groups.ContainsKey(key))
                groups[key] = new List<GameObject>();

            groups[key].Add(unitObj);
        }

        foreach (var pair in groups)
        {
            List<GameObject> sameUnits = pair.Value;

            if (sameUnits.Count >= 3)
            {
                MergedUnits(sameUnits[0], sameUnits[1], sameUnits[2]);
                return true;
            }
        }

        return false;
    }

    private void MergedUnits(GameObject unit1, GameObject unit2, GameObject unit3)
    {
        UnitBase data = unit1.GetComponent<UnitBase>();
        if (data == null) return;
        
        int nextTier = data.tier + 1;
        
        Debug.Log($"합성 시도: 현재 unitID={data.unitID}, 현재 tier={data.tier}");

        Tile spawnTile = unit1.transform.parent.GetComponent<Tile>();
        if (spawnTile == null)
        {
            Debug.LogWarning("합성 생성 타일을 찾을 수 없습니다.");
            return;
        }
        
        GameObject mergedPrefab = GetMergedUnit(nextTier);
        
        if (mergedPrefab == null)
        {
            Debug.LogError($"합성 결과 프리팹이 null 입니다. tier={nextTier}");
            return;
        }


        RemoveUnit(unit1);
        RemoveUnit(unit2);
        RemoveUnit(unit3);

        unitSpawner.SpawnMergedUnit(mergedPrefab, spawnTile);
        Debug.Log($"조합 완료 : Tier={nextTier}");
    }

    private void RemoveUnit(GameObject unitObj)
    {
        if (unitObj == null) return;

        Tile tile = unitObj.transform.parent.GetComponent<Tile>();
        if (tile != null)
            tile.ClearUnit();

        Destroy(unitObj);
    }

    private GameObject GetMergedUnit(int tier)
    {
        List<GameObject> candidates = new List<GameObject>();

        foreach (var info in unitPrefabs)
        {
            if (info.tier == tier && info.prefab != null)
                candidates.Add(info.prefab);
        }

        if (candidates.Count == 0)
            return null;

        int randomIndex = Random.Range(0, candidates.Count);
        return candidates[randomIndex];
    }
}

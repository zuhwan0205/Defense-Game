using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MergeManager : MonoBehaviour
{
    public static MergeManager Instance { get; private set; }

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

    [Header("Merge UI")]
    [SerializeField] private Camera mainCamera;
    [SerializeField] private Vector3 uiOffset = new Vector3(0f, 1.5f, 0f);

    private UnitBase selectedUnit;

    private void Awake()
    {
        Instance = this;
    }

    private void OnEnable()
    {
        IngameEvent.OnClickMergeButton += OnClickCombine;
    }

    private void OnDisable()
    {
        IngameEvent.OnClickMergeButton -= OnClickCombine;
    }

    void Start()
    {
        
    }
    
    private void Update() //유닛이 이동하는 동안에 버튼이 움직여야 함
    {
        UpdateMergeUIPosition();
    }

    public void SelectUnit(UnitBase unit)
    {
        if (unit == null)
            return;

        selectedUnit = unit;
        UpdateMergeUIPosition();
        RefreshMergeUI();
    }

    public void ClearSelection()
    {
        selectedUnit = null;
        RefreshMergeUI();
    }

    private void UpdateMergeUIPosition()
    {
        if (selectedUnit == null || mainCamera == null)
            return;

        Vector3 worldPos = selectedUnit.transform.position + uiOffset;
        Vector3 screenPos = mainCamera.WorldToScreenPoint(worldPos);
        IngameEvent.OnSetMergeBtn_P?.Invoke(screenPos);
    }
    
    public void RefreshMergeUI()
    {
        IngameEvent.OnSetMergeBtn_V?.Invoke(true);
        IngameEvent.OnSetMergeBtn_I?.Invoke(CanMergeUnit());
    }

    public void OnClickCombine()
    {
        bool merged = TryMerge();

        if (!merged)
            Debug.Log("조합 가능한 유닛이 없습니다.");

        RefreshMergeUI();
    }

    private bool CanMergeUnit()
    {
        if (selectedUnit == null) return false;
        if (selectedUnit.tier >= maxTier) return false;

        int count = 0;

        foreach (Tile tile in unitSpawner.Tiles)
        {
            if (tile == null || !tile.IsUnitSpawned) continue;

            GameObject unitObj = tile.CurrentUnit;
            UnitBase unitData = unitObj.GetComponent<UnitBase>();
            if (unitData == null) continue;

            if (unitData.unitID == selectedUnit.unitID && unitData.tier == selectedUnit.tier)
            {
                count++;
                if (count >= 3)
                    return true;
            }
        }

        return false;
    }

    private bool TryMerge()
    {
        if (selectedUnit == null) return false;
        if (selectedUnit.tier >= maxTier) return false;

        List<GameObject> sameUnits = new List<GameObject>();

        foreach (Tile tile in unitSpawner.Tiles)
        {
            if (tile == null || !tile.IsUnitSpawned) continue;

            GameObject unitObj = tile.CurrentUnit;
            UnitBase unitData = unitObj.GetComponent<UnitBase>();
            if (unitData == null) continue;

            if (unitData.unitID == selectedUnit.unitID && unitData.tier == selectedUnit.tier)
                sameUnits.Add(unitObj);
        }

        if (sameUnits.Count < 3)
            return false;

        MergeUnits(sameUnits[0], sameUnits[1], sameUnits[2]);
        ClearSelection();
        return true;
    }

    private void MergeUnits(GameObject unit1, GameObject unit2, GameObject unit3)
    {
        UnitBase data = unit1.GetComponent<UnitBase>();
        if (data == null) return;

        int nextTier = data.tier + 1;

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
using System;
using UnityEngine;
using Random = UnityEngine.Random;

public class UnitSpawner : MonoBehaviour
{
    [SerializeField] private GameObject[] unitPrefabs;
    [SerializeField] private Tile[] tiles;

    private void OnEnable()
    {
        IngameEvent.OnClickSummonButton += SpawnUnit;
    }

    private void OnDisable()
    {
        IngameEvent.OnClickSummonButton -= SpawnUnit;
    }

    public void SpawnUnit()
    {
        Tile emptyTile = FindFirstEmptyTile();
        if (emptyTile == null)
        {
            Debug.Log("빈 타일이 없습니다.");
            return;
        }

        GameObject selectedPrefab = GetRandomUnitPrefab();
        if (selectedPrefab == null) return;

        GameObject clone = Instantiate(selectedPrefab, emptyTile.transform.position, Quaternion.identity);
        emptyTile.SetUnit(clone);
    }

    private Tile FindFirstEmptyTile()
    {
        for (int i = 0; i < tiles.Length; i++)
        {
            if (!tiles[i].IsUnitSpawned)
            {
                return tiles[i];
            }
        }
        return null;
    }

    private GameObject GetRandomUnitPrefab()
    {
        if (unitPrefabs == null || unitPrefabs.Length < 3)
        {
            Debug.LogWarning("유닛 프리팹 3개 필요");
            return null;
        }

        float random = Random.Range(0f, 100f);

        if (random < 50f) return unitPrefabs[0];
        if (random < 80f) return unitPrefabs[1];
        return unitPrefabs[2];
    }
}
using UnityEngine;

/// <summary>
/// 유닛 생성 제어
/// </summary>
public class UnitSpawner : MonoBehaviour
{
    [SerializeField] private GameObject[] towerPrefabs;   // 3개 프리팹 넣기
    [SerializeField] private EnemySpawner enemySpawner;   // 현재 맵에 존재하는 적 리스트 정보를 얻기 위해

    /// <summary>
    /// 매개변수의 위치에 타워 생성
    /// </summary>
    public void SpawnTower(Transform tileTransform)
    {
        Tile tile = tileTransform.GetComponent<Tile>();

        // 1. 이미 타워가 있으면 생성 불가
        if (tile.IsBuildTower)
        {
            return;
        }

        // 프리팹이 없으면 종료
        if (towerPrefabs == null || towerPrefabs.Length == 0)
        {
            Debug.LogWarning("타워 프리팹이 설정되지 않았습니다.");
            return;
        }

        // 확률에 따라 프리팹 선택
        GameObject selectedPrefab = GetRandomTowerPrefab();

        // 선택 실패 시 종료
        if (selectedPrefab == null)
        {
            Debug.LogWarning("선택된 타워 프리팹이 없습니다.");
            return;
        }

        // 타워 건설 처리
        tile.IsBuildTower = true;

        // 타워 생성
        GameObject clone = Instantiate(selectedPrefab, tileTransform.position, Quaternion.identity);

        // EnemySpawner 전달
        //clone.GetComponent<TowerWeapon>().Setup(enemySpawner);
    }

    private GameObject GetRandomTowerPrefab()
    {
        float random = Random.Range(0f, 100f);

        if (random < 50f)
        {
            return towerPrefabs[0];
        }
        else if (random < 80f)
        {
            return towerPrefabs[1];
        }
        else
        {
            return towerPrefabs[2];
        }
    }
}

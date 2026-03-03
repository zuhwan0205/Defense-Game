using UnityEngine;

/// <summary>
/// 유닛 생성 제어
/// </summary>
public class UnitSpawner : MonoBehaviour
{
    [Header("Spawn Units")]
    [SerializeField] private GameObject[] unitPrefabs;     // 랜덤 소환할 유닛 프리팹들
    [SerializeField] private Transform[] tilePoints;       // 1~20번 타일을 순서대로 넣기
    
    private void OnEnable()
    {
        IngameEvent.OnClickSummonButton += SpawnUnit;
    }

    private void OnDisable()
    {
        IngameEvent.OnClickSummonButton -= SpawnUnit;
    }
    
    /// <summary>
    /// 소환 버튼에서 호출
    /// 앞에서부터 첫 번째 빈칸에 랜덤 유닛 배치
    /// </summary>
    public void SpawnUnit()
    {
        // 프리팹 체크
        if (unitPrefabs == null || unitPrefabs.Length == 0)
        {
            Debug.LogWarning("유닛 프리팹이 설정되지 않았습니다.");
            return;
        }

        // 타일 체크
        if (tilePoints == null || tilePoints.Length == 0)
        {
            Debug.LogWarning("타일이 설정되지 않았습니다.");
            return;
        }

        // 앞에서부터 첫 번째 빈칸 찾기
        Transform emptyTile = FindTile();

        if (emptyTile == null)
        {
            Debug.Log("빈 타일이 없습니다.");
            return;
        }

        Tile tile = emptyTile.GetComponent<Tile>();
        if (tile == null)
        {
            Debug.LogWarning("Tile 컴포넌트가 없습니다: " + emptyTile.name);
            return;
        }

        // 랜덤 유닛 선택
        GameObject selectedPrefab = SelectUnit();
        if (selectedPrefab == null)
        {
            Debug.LogWarning("선택된 유닛 프리팹이 없습니다.");
            return;
        }

        // 배치 처리
        tile.IsUnitSpawned = true;

        GameObject clone = Instantiate(selectedPrefab, emptyTile.position, Quaternion.identity);
    }

    /// <summary>
    /// 앞에서부터 첫 번째 빈 타일 탐색
    /// </summary>
    private Transform FindTile()
    {
        for (int i = 0; i < tilePoints.Length; i++)
        {
            if (tilePoints[i] == null) continue;

            Tile tile = tilePoints[i].GetComponent<Tile>();
            if (tile == null) continue;

            if (!tile.IsUnitSpawned)
            {
                return tilePoints[i];
            }
        }

        return null;
    }

    /// <summary>
    /// 확률에 따라 랜덤 유닛 선택
    /// </summary>
    private GameObject SelectUnit()
    {
        // 프리팹 3개 기준 예시
        float random = Random.Range(0f, 100f);
        
        if (random < 50f)
        {
            return unitPrefabs[0];
        }
        else if (random < 80f)
        {
            return unitPrefabs[1];
        }
        else
        {
            return unitPrefabs[2];
        }
    }
}

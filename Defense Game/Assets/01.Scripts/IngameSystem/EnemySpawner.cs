using System.Collections;
using UnityEngine;

public class EnemySpawner : MonoBehaviour
{
    [Header("일반 몹")]
    [SerializeField] private GameObject[] enemyPrefabs;
    [SerializeField] private float spawnTime;
    [SerializeField] private Transform[] myPoints;
    
    [Header("보스 몹")]
    [SerializeField] private GameObject[] bossPrefabs;
    [SerializeField] private Transform bossPoint;
    
    
    [SerializeField] private RoundManager roundManager;
    
    private GameObject currentPrefab;
    private GameObject currentBossPrefab;
    private Coroutine spawnCo;
    private bool isBossRound;
    private bool bossSpawned;

    private void Awake()
    {
        // 시작 프리팹 세팅
        SetRound(roundManager != null ? roundManager.CurrentRound : 1);

        // 라운드 이벤트 구독
        if (roundManager != null)
            roundManager.OnRoundStarted += HandleStarted;

        spawnCo = StartCoroutine(SpawnEnemy());
    }

    private void OnDestroy()
    {
        if (roundManager != null)
            roundManager.OnRoundStarted -= HandleStarted;
    }

    private void HandleStarted(int round)
    {
        SetRound(round);
    }

    private void SetRound(int round)
    {
        bossSpawned = false;
        isBossRound = (round == 10 || round == 20 || round == 30);
        
        int idx = round / 5;
        idx = Mathf.Clamp(idx, 0, enemyPrefabs.Length - 1);

        currentPrefab = enemyPrefabs[idx];
    }

    private IEnumerator SpawnEnemy()
    {
        while (true)
        {
            if (isBossRound && !bossSpawned)
            {
                SpawnBoss(roundManager.CurrentRound);
                bossSpawned = true;
            }
            
            if (currentPrefab != null)
            {
                GameObject clone = Instantiate(currentPrefab);
                EnemyControler enemy = clone.GetComponent<EnemyControler>();
                enemy.Setup(myPoints);
            }
            else
            {
                Debug.LogWarning("EnemySpawner: currentPrefab is null.");
            }

            yield return new WaitForSeconds(spawnTime);
        }
    }
    
    private void SpawnBoss(int round)
    {
        int bossIndex = (round / 10) - 1;

        if (bossIndex < 0 || bossIndex >= bossPrefabs.Length)
        {
            Debug.LogError($"EnemySpawner: bossPrefabs index out of range. round={round}, bossIndex={bossIndex}");
            return;
        }

        GameObject bossClone = Instantiate(bossPrefabs[bossIndex], bossPoint.position, Quaternion.identity);

        EnemyControler bossEnemy = bossClone.GetComponent<EnemyControler>();
        if (bossEnemy != null)
            bossEnemy.Setup(myPoints);
        else
            Debug.LogError($"{bossClone.name}에 EnemyControler가 없습니다.");
    }
}

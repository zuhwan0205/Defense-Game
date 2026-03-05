using System.Collections;
using UnityEngine;

public class EnemySpawner : MonoBehaviour
{
    [SerializeField] private GameObject[] enemyPrefabs;
    [SerializeField] private float spawnTime;
    [SerializeField] private Transform[] myPoints;
    [SerializeField] private RoundManager roundManager;
    private GameObject currentPrefab;
    private Coroutine spawnCo;

    private void Awake()
    {
        // 시작 프리팹 세팅
        SetPrefabByRound(roundManager != null ? roundManager.CurrentRound : 1);

        // 라운드 이벤트 구독
        if (roundManager != null)
            roundManager.OnRoundStarted += HandleRoundStarted;

        spawnCo = StartCoroutine(SpawnEnemy());
    }

    private void OnDestroy()
    {
        if (roundManager != null)
            roundManager.OnRoundStarted -= HandleRoundStarted;
    }

    private void HandleRoundStarted(int round)
    {
        SetPrefabByRound(round);
    }

    private void SetPrefabByRound(int round)
    {
        if (enemyPrefabs == null || enemyPrefabs.Length == 0)
        {
            Debug.LogError("EnemySpawner: enemyPrefabs is empty!");
            currentPrefab = null;
            return;
        }
        
        int idx = round / 5;
        idx = Mathf.Clamp(idx, 0, enemyPrefabs.Length - 1);

        currentPrefab = enemyPrefabs[idx];
    }

    private IEnumerator SpawnEnemy()
    {
        while (true)
        {
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
}

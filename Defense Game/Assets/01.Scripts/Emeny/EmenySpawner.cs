using System.Collections;
using UnityEngine;

public class EmenySpawner : MonoBehaviour
{
    [SerializeField]
    private GameObject enemyPrefab;
    [SerializeField]
    private float spawnTime;
    [SerializeField]
    private Transform[] myPoints;

    private void Awake()
    {
        // 적 생성 코루틴 함수 호출
        StartCoroutine(SpawnEnemy());
    }

    /// <summary>
    /// 적 스폰 코루틴 함수
    /// </summary>
    /// <returns></returns>
    private IEnumerator SpawnEnemy()
    {
        while(true)
        {
            GameObject clone = Instantiate(enemyPrefab);
            EmenyControler enemy = clone.GetComponent<EmenyControler>();

            enemy.Setup(myPoints);

            yield return new WaitForSeconds(spawnTime);
        }
    }
}

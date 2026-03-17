using System.Collections;
using UnityEngine;

public class EnemyControler : MonoBehaviour
{
    private int wayPointCount;
    [SerializeField] private Transform[] wayPoints;
    private int currentIndex = 0;

    [SerializeField] private EnemyMovement enemyMovement;
    [SerializeField] private bool isBoss = false;
    [SerializeField] private EnemyStats enemyStats;

    private Coroutine moveCoroutine;

    public void Setup(Transform[] points)
    {
        if (isBoss)
        {
            transform.localScale = new Vector3(-1f, 1f, 1f);
            return;
        }

        if (points == null || points.Length == 0)
        {
            Debug.LogWarning($"{name}: wayPoints가 비어있음");
            return;
        }

        wayPoints = points;
        wayPointCount = wayPoints.Length;
        currentIndex = 0;

        transform.position = wayPoints[currentIndex].position;

        if (moveCoroutine != null)
            StopCoroutine(moveCoroutine);

        moveCoroutine = StartCoroutine(OnMove());
    }

    private IEnumerator OnMove()
    {
        while (true)
        {
            Transform targetPoint = wayPoints[currentIndex];

            SetDirc(targetPoint.position);

            while (Vector3.Distance(transform.position, targetPoint.position) > 0.01f)
            {
                transform.position = Vector3.MoveTowards(
                    transform.position,
                    targetPoint.position,
                    enemyMovement.MoveSpeed * Time.deltaTime
                );

                yield return null;
            }

            transform.position = targetPoint.position;

            currentIndex++;

            if (currentIndex >= wayPointCount)
            {
                currentIndex = 0; // 순환형 경로일 때
                // 순환이 아니라 끝나야 하면:
                // yield break;
            }
        }
    }

    private void SetDirc(Vector3 targetPos)
    {
        if (targetPos.x < transform.position.x)
            transform.localScale = new Vector3(0.8f, 0.8f, 1f);
        else if (targetPos.x > transform.position.x)
            transform.localScale = new Vector3(-0.8f, 0.8f, 1f);
    }
}
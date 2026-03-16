using UnityEngine;

public class Arrow : MonoBehaviour
{
    [SerializeField] private float speed = 8f;

    private Transform target;
    private int damage;

    public void SetTarget(Transform target, int damage)
    {
        this.target = target;
        this.damage = damage;
    }

    private void Update()
    {
        if (target == null)
        {
            Destroy(gameObject);
            return;
        }

        // 타겟 방향 계산
        Vector3 dir = target.position - transform.position;
        float distanceThisFrame = speed * Time.deltaTime;

        // 거의 도착했으면 바로 피격 처리
        if (dir.magnitude <= distanceThisFrame)
        {
            HitTarget();
            return;
        }

        // 이동
        transform.position += dir.normalized * distanceThisFrame;

        // 화살이 날아가는 방향으로 회전 (2D)
        float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
        transform.rotation = Quaternion.Euler(0f, 0f, angle);
    }

    private void HitTarget()
    {
        if (target != null)
        {
            EnemyStats enemy = target.GetComponent<EnemyStats>();
            if (enemy != null)
            {
                enemy.TakeDamage(damage);
            }
        }

        Destroy(gameObject);
    }
}

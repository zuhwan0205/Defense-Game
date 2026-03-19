using UnityEngine;

public class MeleeAreaAttack : MonoBehaviour,  IAttackHandler
{
    [SerializeField] private Animator animator;
    [SerializeField] private LayerMask enemyLayer;

    [Header("Pierce Area")]
    [SerializeField] private Vector2 boxSize = new Vector2(1.5f, 0.6f); // 길이, 두께
    [SerializeField] private float forwardOffset = 0.8f;                 // 유닛 앞쪽으로 얼마나 띄울지

    private int Damage;
    private Vector2 lastAttackDir = Vector2.right;

    public void Attack(Transform target, int damage)
    {
        if (target == null) return;

        Damage = damage;

        // 타겟 방향 저장
        Vector2 dir = (target.position - transform.position).normalized;
        if (dir != Vector2.zero)
        {
            lastAttackDir = dir;
        }

        if (animator != null)
        {
            animator.SetTrigger("Attack");
        }
        
        ApplyDamage();
        
    }

    // 애니메이션 이벤트로 호출 추천
    public void ApplyDamage()
    {
        Vector2 center = (Vector2)transform.position + lastAttackDir * forwardOffset;

        float angle = Mathf.Atan2(lastAttackDir.y, lastAttackDir.x) * Mathf.Rad2Deg;

        Collider2D[] hits = Physics2D.OverlapBoxAll(center, boxSize, angle, enemyLayer);

        foreach (Collider2D hit in hits)
        {
            EnemyStats enemy = hit.GetComponent<EnemyStats>();
            if (enemy != null)
            {
                enemy.TakeDamage(Damage);
            }
        }
    }

    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.cyan;

        Vector3 center = transform.position + (Vector3)(lastAttackDir.normalized * forwardOffset);
        Gizmos.matrix = Matrix4x4.TRS(center, Quaternion.Euler(0, 0, Mathf.Atan2(lastAttackDir.y, lastAttackDir.x) * Mathf.Rad2Deg), Vector3.one);
        Gizmos.DrawWireCube(Vector3.zero, boxSize);
        Gizmos.matrix = Matrix4x4.identity;
    }
}

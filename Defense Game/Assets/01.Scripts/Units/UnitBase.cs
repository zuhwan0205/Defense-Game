using UnityEngine;

public class UnitBase : MonoBehaviour
{
    [Header("Stats")]
    [SerializeField] protected float attackRange = 3f;
    [SerializeField] protected float attackDelay = 1f;
    [SerializeField] protected int damage = 1;
    [SerializeField] protected LayerMask enemyLayer;

    protected Transform currentTarget;
    protected float lastAttackTime;

    private IAttackHandler attackHandler;

    protected virtual void Awake()
    {
        attackHandler = GetComponent<IAttackHandler>();
    }

    protected virtual void Update()
    {
        if (currentTarget == null || !IsTargetInRange(currentTarget))
        {
            currentTarget = FindClosestEnemy();
        }

        if (currentTarget != null && Time.time >= lastAttackTime + attackDelay)
        {
            attackHandler?.Attack(currentTarget, damage);
            lastAttackTime = Time.time;
        }
    }

    protected Transform FindClosestEnemy()
    {
        Collider2D[] hits = Physics2D.OverlapCircleAll(transform.position, attackRange, enemyLayer);

        Transform closest = null;
        float minDistance = Mathf.Infinity;

        foreach (Collider2D hit in hits)
        {
            float dist = Vector2.Distance(transform.position, hit.transform.position);
            if (dist < minDistance)
            {
                minDistance = dist;
                closest = hit.transform;
            }
        }

        return closest;
    }

    protected bool IsTargetInRange(Transform target)
    {
        if (target == null) return false;
        return Vector2.Distance(transform.position, target.position) <= attackRange;
    }

    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, attackRange);
    }
}

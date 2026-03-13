using UnityEngine;
using UnityEngine.EventSystems;

public class UnitBase : MonoBehaviour, IPointerClickHandler
{
    [Header("스탯")]
    [SerializeField] protected float attackRange = 3f;
    [SerializeField] protected float attackDelay = 1f;
    [SerializeField] protected int damage = 1;
    [SerializeField] protected LayerMask enemyLayer;
    private float bossTileBonusRange = 5f;
    
    [Header("유닛 정보")]
    public int unitID;   // pawn_Axe,Hammer,knife,Archer,Lancer,Warrior 순서대로 0~5
    public int tier;     // 강화 단계(pawn은 1, 나머지 2)

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
            currentTarget = FindEnemy();
        }

        if (currentTarget != null && Time.time >= lastAttackTime + attackDelay)
        {
            attackHandler?.Attack(currentTarget, damage);
            lastAttackTime = Time.time;
        }
    }

    protected Transform FindEnemy()
    {
        Collider2D[] hits = Physics2D.OverlapCircleAll(transform.position, GetCurrentAttackRange(), enemyLayer);

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
        return Vector2.Distance(transform.position, target.position) <= GetCurrentAttackRange();
    }

    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, GetCurrentAttackRange());
    }
    
    public void OnPointerClick(PointerEventData eventData)
    {
        Debug.Log($"{name} 클릭됨");

        if (MergeManager.Instance == null) return;
        MergeManager.Instance.SelectUnit(this);
    }
    
    private bool IsOnBossTile()         //지금은 사거리만 넣었는데 나중에 아이템 추가 하면 다른 기능도 넣을 예정
    {
        Tile tile = transform.parent != null ? transform.parent.GetComponent<Tile>() : null;
        return tile != null && tile.IsBossTile;
    }
    
    private float GetCurrentAttackRange()
    {
        return IsOnBossTile() ? attackRange + bossTileBonusRange : attackRange;
    }
}

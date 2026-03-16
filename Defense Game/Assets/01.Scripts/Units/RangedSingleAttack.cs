using UnityEngine;

public class RangedSingleAttack : MonoBehaviour, IAttackHandler
{
    [SerializeField] private Animator animator;

    public void Attack(Transform target, int damage)
    {
        if (target == null) return;

        if (animator != null)
            animator.SetTrigger("Attack");

        EnemyStats enemy = target.GetComponent<EnemyStats>();
        if (enemy != null)
        {
            enemy.ReduceDefense(damage);
        }
    }
}

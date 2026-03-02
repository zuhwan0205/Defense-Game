using UnityEngine;

public class MeleeSingleAttack : MonoBehaviour, IAttackHandler
{
    [SerializeField] private Animator animator;

    private Transform Target;
    private int Damage;

    public void Attack(Transform target, int damage)
    {
        if (target == null) return;

        Target = target;
        Damage = damage;

        if (animator != null)
        {
            animator.SetTrigger("Attack");
            ApplyDamage();
        }

    }
    
    public void ApplyDamage()
    {
        if (Target == null) return;

        // 타겟이 죽었거나 사라졌으면 종료
        EnemyControler enemy = Target.GetComponent<EnemyControler>();
        if (enemy != null)
        {
            enemy.TakeDamage(Damage);
        }
    }
}

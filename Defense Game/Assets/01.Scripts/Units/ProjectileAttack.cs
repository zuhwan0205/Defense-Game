using UnityEngine;

public class ProjectileAttack : MonoBehaviour, IAttackHandler
{
    [SerializeField] private GameObject arrowPrefab;
    [SerializeField] private Transform firePoint;
    [SerializeField] private Animator animator;

    public void Attack(Transform target, int damage)
    {
        if (target == null || arrowPrefab == null || firePoint == null) return;

        GameObject arrow = Instantiate(arrowPrefab, firePoint.position, Quaternion.identity);
        Arrow arrowComp = arrow.GetComponent<Arrow>();
        animator.SetTrigger("Attack");

        if (arrowComp != null)
        {
            arrowComp.SetTarget(target, damage);
        }
        
    }
}

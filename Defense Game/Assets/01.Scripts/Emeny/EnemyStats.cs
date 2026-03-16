using UnityEngine;

public class EnemyStats : MonoBehaviour
{
    [SerializeField] private int hp = 10;
    [SerializeField] private int defense = 0;
    
    public int Defense => defense;
    public int Hp => hp;

    public void TakeDamage(int damage)
    {
        float reductionPercent = Mathf.Clamp(defense / 100f, 0f, 0.8f);     //데미지를 방어력*0.1 만큼 막아줌
        int finalDamage = Mathf.RoundToInt(damage * (1f - reductionPercent));
        finalDamage = Mathf.Max(finalDamage, 1);
        
        hp -= finalDamage;

        if (hp <= 0)
        {
            Die();
        }
    }

    public void ReduceDefense(int amount)
    {
        defense = Mathf.Max(defense - amount, 0);
        Debug.Log($"{gameObject.name} 방어력 감소, 현재 방어력: {defense}");
    }

    private void Die()
    {
        GoldManager.Instance.AddGold(1);
        Destroy(gameObject);
    }
}

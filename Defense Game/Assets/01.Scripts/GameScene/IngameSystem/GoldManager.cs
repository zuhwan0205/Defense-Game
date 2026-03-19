using UnityEngine;
using System;

public class GoldManager : MonoBehaviour
{
    public static GoldManager Instance { get; private set; }

    [Header("시작 골드")]
    [SerializeField] private int startGold = 100;

    [Header("소환 비용")]
    [SerializeField] private int baseSummonCost = 30;
    [SerializeField] private float summonCostIncreaseRate = 0.10f;

    public int CurrentGold { get; private set; }
    public int SummonCount { get; private set; } // 몇 번 소환했는지
    public int CurrentSummonCost => CalculateCost();

    public event Action<int> OnGoldChanged;
    public event Action<int> OnSummonCostChanged;

    private void Awake()
    {
        if (Instance != null) { Destroy(gameObject); return; }
        Instance = this;

        ResetGold();
    }

    public void ResetGold()
    {
        CurrentGold = startGold;
        SummonCount = 0;

        OnGoldChanged?.Invoke(CurrentGold);
        OnSummonCostChanged?.Invoke(CurrentSummonCost);
    }

    /// <summary>
    /// 골드 추가
    /// </summary>
    public void AddGold(int amount = 1)
    {
        if (amount <= 0) return;

        CurrentGold += amount;
        OnGoldChanged?.Invoke(CurrentGold);
    }

    /// <summary>
    /// 소환 시도: 골드 충분하면 차감 + 소환횟수 증가(다음 비용 10% 증가)
    /// </summary>
    public bool TrySpend()
    {
        int cost = CurrentSummonCost;
        if (CurrentGold < cost) return false;

        CurrentGold -= cost;
        SummonCount++;

        OnGoldChanged?.Invoke(CurrentGold);
        OnSummonCostChanged?.Invoke(CurrentSummonCost); //비용 변경됨
        return true;
    }

    /// <summary>
    /// 유닛 업그레이드 비용 지불
    /// </summary>
    public bool TrySpend(int cost)
    {
        if (cost <= 0) return true;
        if (CurrentGold < cost) return false;

        CurrentGold -= cost;
        OnGoldChanged?.Invoke(CurrentGold);
        return true;
    }

    private int CalculateCost()
    {
        // 10% 씩 비용 추가
        float cost = baseSummonCost * Mathf.Pow(1f + summonCostIncreaseRate, SummonCount);

        // 정수로 변환
        return Mathf.CeilToInt(cost);
    }
}


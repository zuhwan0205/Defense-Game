using UnityEngine;
using TMPro;

public class IngameUI : MonoBehaviour
{
    [Header("라운드 UI")]
    [SerializeField] private RoundManager roundManager;
    [SerializeField] private TextMeshProUGUI roundText;
    [SerializeField] private TextMeshProUGUI timeText;
    
    [Header("골드 UI")]
    [SerializeField] private GoldManager goldManager;
    [SerializeField] private TextMeshProUGUI goldText;
    [SerializeField] private TextMeshProUGUI summonCostText;
    

    public void OnClickSummon()
    {
        IngameEvent.OnClickSummonButton?.Invoke();
    }

    public void OnClickMerge()
    {
        IngameEvent.OnClickMergeButton?.Invoke();
    }

    private void OnEnable()
    {
        if (roundManager != null)
        {
            roundManager.OnRoundStarted += RoundStarted;
            roundManager.OnGameEnded += GameEnded;
        }
        
        if (goldManager != null)
        {
            goldManager.OnSummonCostChanged += SummonCostChanged;
            goldManager.OnGoldChanged += OnGoldChanged;
        }

        RefreshUI(); // 처음 1번 갱신
    }

    private void OnDisable()
    {
        if (roundManager != null)
        {
            roundManager.OnRoundStarted -= RoundStarted;
            roundManager.OnGameEnded -= GameEnded;
        }
        
        if (goldManager != null)
        {
            goldManager.OnSummonCostChanged -= SummonCostChanged;
            goldManager.OnGoldChanged -= OnGoldChanged;
        }
    }

    private void Update()
    {
        // 남은 시간은 매 프레임 변하니까 Update에서 갱신
        RefreshTime();
    }

    private void RoundStarted(int round)
    {
        RefreshUI();
    }

    private void GameEnded()
    {
        // Game Over 패널 띄우기 같은 거 여기서 처리
        RefreshUI();
    }
    
    private void SummonCostChanged(int cost) => RefreshSummonCost();
    private void OnGoldChanged(int gold) => RefreshGold();

    private void RefreshUI()
    {
        if (roundManager == null) return;

        if (roundText != null)
            roundText.text = $"Round {roundManager.CurrentRound}/30";

        RefreshTime();
        RefreshGold();
        RefreshSummonCost();
    }

    private void RefreshTime()
    {
        if (roundManager == null || timeText == null) return;

        float t = Mathf.Max(0f, roundManager.RemainingTime);
        int sec = Mathf.CeilToInt(t);

        int mm = sec / 60;
        int ss = sec % 60;

        timeText.text = $"{mm:00}:{ss:00}";
    }
    
    private void RefreshGold()
    {
        if (goldManager == null || goldText == null) return;
        goldText.text = $" Gold: {goldManager.CurrentGold}";
    }
    
    private void RefreshSummonCost()
    {
        if (goldManager == null || summonCostText == null) return;

        summonCostText.text = $" Cost: {goldManager.CurrentSummonCost}";
    }
}
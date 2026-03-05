using UnityEngine;
using TMPro;

public class IngameUI : MonoBehaviour
{
    [Header("Round UI")]
    [SerializeField] private RoundManager roundManager;
    [SerializeField] private TextMeshProUGUI roundText;
    [SerializeField] private TextMeshProUGUI timeText;

    public void OnClickSummon()
    {
        IngameEvent.OnClickSummonButton?.Invoke();
    }

    private void OnEnable()
    {
        if (roundManager != null)
        {
            roundManager.OnRoundStarted += RoundStarted;
            roundManager.OnGameEnded += GameEnded;
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

    private void RefreshUI()
    {
        if (roundManager == null) return;

        if (roundText != null)
            roundText.text = $"Round {roundManager.CurrentRound}/30";

        RefreshTime();
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
}
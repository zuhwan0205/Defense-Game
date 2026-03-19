using System;
using UnityEngine;

public class RoundManager : MonoBehaviour
{
    [Header("Settings")]
    [SerializeField] private float roundDuration = 2f;
    [SerializeField] private int maxRound = 30;

    public int CurrentRound { get; private set; } = 1;
    public float RemainingTime { get; private set; }

    public event Action<int> OnRoundStarted;
    public event Action<int> OnRoundEnded;
    public event Action OnGameEnded;

    private bool isRunning;

    private void Awake()
    {
        RemainingTime = roundDuration;
    }

    void Start()
    {
        StartRounds();
    }

    public void StartRounds()
    {
        if (isRunning) return;
        isRunning = true;

        CurrentRound = 1;
        RemainingTime = roundDuration;
        OnRoundStarted?.Invoke(CurrentRound);
    }

    public void StopRounds()
    {
        isRunning = false;
    }

    private void Update()
    {
        if (!isRunning) return;

        RemainingTime -= Time.deltaTime;

        if (RemainingTime <= 0f)
        {
            EndRound();
        }
    }

    private void EndRound()
    {
        OnRoundEnded?.Invoke(CurrentRound);

        // 마지막 라운드면 게임 종료
        if (CurrentRound >= maxRound)
        {
            isRunning = false;
            OnGameEnded?.Invoke();
            return;
        }

        // 다음 라운드 시작
        CurrentRound++;
        RemainingTime = roundDuration;
        OnRoundStarted?.Invoke(CurrentRound);
    }
}

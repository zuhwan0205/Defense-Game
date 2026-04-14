using UnityEngine;
using BackEnd;

public class BackendManager : MonoBehaviour
{
    public static BackendManager Instance { get; private set; }

    [SerializeField] private BackendLogin backendLogin;
    [SerializeField] private BackendGameData backendGameData;

    public bool IsInitialized { get; private set; }

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);

            if (backendLogin == null)
                Debug.LogError("BackendLogin 컴포넌트가 없습니다.");

            if (backendGameData == null)
                Debug.LogError("BackendGameData 컴포넌트가 없습니다.");
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void Start()
    {
        InitializeBackend();
    }

    public void InitializeBackend()
    {
        var bro = Backend.Initialize();

        if (bro.IsSuccess())
        {
            IsInitialized = true;
            Debug.Log("뒤끝 초기화 성공 : " + bro);

            backendLogin.TryAutoLogin();
        }
        else
        {
            Debug.LogError("뒤끝 초기화 실패 : " + bro);
        }
    }

    public void OnLoginSuccess()
    {
        Debug.Log("BackendManager - 로그인 성공 후 데이터 로드 시작");
        backendGameData.LoadMyData();
    }
}
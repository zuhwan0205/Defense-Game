using UnityEngine;
using BackEnd;

public class BackendSDK : MonoBehaviour
{
    public static BackendSDK Instance { get; private set; }

    [SerializeField] private BackendLogin backendLogin;
    [SerializeField] private BackendGameData backendGameData;
    
    public System.Action<float> OnProgressChanged;

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
        ReportProgress(0.1f);
        
        var bro = Backend.Initialize();

        if (bro.IsSuccess())
        {
            IsInitialized = true;
            Debug.Log("뒤끝 초기화 성공 : " + bro);
            
            ReportProgress(0.2f);

            backendLogin.TryAutoLogin();
        }
        else
        {
            Debug.LogError("뒤끝 초기화 실패 : " + bro);
        }
    }

    public void OnAfterLogin()
    {
        Debug.Log("BackendManager - 로그인 성공 후 데이터 로드 시작");
        backendGameData.LoadMyData();
    }
    
    public void ReportProgress(float value)
    {
        OnProgressChanged?.Invoke(value);
    }
}
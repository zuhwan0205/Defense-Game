using UnityEngine;
using UnityEngine.UI;
using Google;

public class LoginUI : MonoBehaviour
{
    [Header("UI")]
    [SerializeField] private Button googleLoginButton;
    [SerializeField] private Button guestLoginButton;
    [SerializeField] private GameObject loginPanel;

    [SerializeField] private BackendLogin backendLogin;

    private GoogleSignInConfiguration configuration;

    private void Awake()
    {
        if (backendLogin == null)
        {
            Debug.LogError("BackendLogin 없음");
            return;
        }

        // 🔹 Google 설정
        configuration = new GoogleSignInConfiguration
        {
            WebClientId = "여기에 Web Client ID 넣기",
            RequestIdToken = true
        };

        // 🔹 자동 로그인 실패 시 UI 띄우기
        backendLogin.OnRequireLoginSelect += ShowLoginUI;

        // 🔹 로그인 실패 메시지 처리 (선택)
        backendLogin.OnLoginFailed += OnLoginFailed;
    }

    private void ShowLoginUI()
    {
        loginPanel.SetActive(true);
    }

    private void HideLoginUI()
    {
        loginPanel.SetActive(false);
    }

    // =========================
    // 버튼 이벤트
    // =========================

    private void OnClickGuestLogin()
    {
        backendLogin.GuestLogin();
        HideLoginUI();
    }

    private void OnClickGoogleLogin()
    {
        GoogleSignIn.Configuration = configuration;

        GoogleSignIn.DefaultInstance.SignIn().ContinueWith(task =>
        {
            if (task.IsCanceled)
            {
                Debug.Log("구글 로그인 취소");
                return;
            }

            if (task.IsFaulted)
            {
                Debug.LogError("구글 로그인 실패: " + task.Exception);
                return;
            }

            string idToken = task.Result.IdToken;

            Debug.Log("구글 ID Token 받음");

            // 🔥 메인 스레드에서 실행해야 안전
            UnityMainThreadDispatcher.Instance().Enqueue(() =>
            {
                backendLogin.GoogleLogin(idToken);
                HideLoginUI();
            });
        });
    }

    private void OnLoginFailed(string msg)
    {
        Debug.LogError("로그인 실패: " + msg);
        ShowLoginUI();
    }
}

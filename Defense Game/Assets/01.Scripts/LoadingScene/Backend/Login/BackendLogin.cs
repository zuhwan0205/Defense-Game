using UnityEngine;
using BackEnd;

public class BackendLogin : MonoBehaviour
{
    [SerializeField] private BackendSDK backendSDK;
    
    public System.Action OnLoginSelect;

    public bool IsLoggedIn { get; private set; }
    
    public System.Action<string> OnLoginFailed;
    
    private void Awake()
    {
        if (backendSDK == null)
        {
            Debug.LogError("BackendManager 컴포넌트가 없습니다.");
        }
    }

    public void TryAutoLogin()
    {
        Debug.Log("자동 로그인 시도");

        var bro = Backend.BMember.LoginWithTheBackendToken();

        if (bro.IsSuccess())
        {
            Debug.Log("자동 로그인 성공 : " + bro);
            OnLoginSuccess();
        }
        else
        {
            Debug.LogWarning("자동 로그인 실패 : " + bro);
            OnLoginSelect?.Invoke();
        }
    }


    public void GuestLogin()
    {
        Debug.Log("게스트 로그인 시도");

        var bro = Backend.BMember.GuestLogin();

        if (bro.IsSuccess())
        {
            Debug.Log("게스트 로그인 성공 : " + bro);
            OnLoginSuccess();
        }
        else
        {
            OnErrorLogin();
            Debug.LogError("게스트 로그인 실패 : " + bro);
        }
    }
    
    public void GoogleLogin(string idToken)
    {
        var bro = Backend.BMember.AuthorizeFederation(idToken, FederationType.Google);

        if (bro.IsSuccess())
        {
            Debug.Log("구글 로그인 성공");
            OnLoginSuccess();
        }
        else
        {
            OnErrorLogin();
            Debug.LogError("구글 로그인 실패 : " + bro);
        }
    }

    public bool UpdateNickname(string nickname)
    {
        var bro = Backend.BMember.UpdateNickname(nickname);
        if (bro.IsSuccess()) { Debug.Log("닉네임 변경 성공"); return true; }
        Debug.LogError("닉네임 변경 실패 : " + bro); return false;
    }

    private void OnLoginSuccess()
    {
        IsLoggedIn = true;
        
        backendSDK.ReportProgress(0.4f);

        Debug.Log("로그인 완료");
        Debug.Log("UID : " + Backend.UID);
        Debug.Log("InDate : " + Backend.UserInDate);
        Debug.Log("NickName : " + Backend.UserNickName);

        backendSDK.OnLoginSuccess();
    }

    private void OnErrorLogin()
    {
        OnLoginFailed?.Invoke("로그인 실패");
    }
}
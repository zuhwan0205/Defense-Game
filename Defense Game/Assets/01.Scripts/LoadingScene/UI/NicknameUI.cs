using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class NicknameUI : MonoBehaviour
{
    [Header("UI")]
    [SerializeField] private GameObject panel;
    [SerializeField] private TMP_InputField inputField;
    [SerializeField] private Button confirmButton;
    [SerializeField] private TMP_Text feedbackText;

    [Header("닉네임 규칙")]
    [SerializeField] private int minLength = 2;
    [SerializeField] private int maxLength = 12;

    [Header("참조")]
    [SerializeField] private BackendLogin backendLogin;

    private void Start()
    {
        if (confirmButton == null) { Debug.LogError("[NicknameUI] confirmButton 미연결"); return; }
        if (backendLogin  == null) { Debug.LogError("[NicknameUI] backendLogin 미연결");  return; }

        confirmButton.onClick.AddListener(OnClickConfirm);
        panel.SetActive(false);
    }

    public void CheckNickname()
    {
        if (string.IsNullOrEmpty(BackEnd.Backend.UserNickName))
        {
            Debug.Log("[NicknameUI] 닉네임 없음 → 입력 UI 활성화");
            SetFeedback(string.Empty);
            panel.SetActive(true);
        }
        else
        {
            Debug.Log("[NicknameUI] 닉네임 있음 → UI 생략");
            panel.SetActive(false);
        }
    }

    private void OnClickConfirm()
    {
        string nickname = inputField.text.Trim();

        // ── 클라이언트 유효성 검사 ──────────────────────────
        if (string.IsNullOrEmpty(nickname))
        {
            SetFeedback("닉네임을 입력해주세요.");
            return;
        }

        if (nickname.Length < minLength || nickname.Length > maxLength)
        {
            SetFeedback($"닉네임은 {minLength}~{maxLength}자 사이여야 합니다.");
            return;
        }

        // ── 서버 요청 (중복 클릭 방지) ──────────────────────
        confirmButton.interactable = false;

        bool success = backendLogin.UpdateNickname(nickname);

        if (success)
        {
            Debug.Log("[NicknameUI] 닉네임 설정 성공");
            panel.SetActive(false);
        }
        else
        {
            Debug.LogWarning("[NicknameUI] 닉네임 설정 실패");
            SetFeedback("닉네임 설정에 실패했습니다. 다시 시도해주세요.");
            confirmButton.interactable = true;  // 실패 시에만 버튼 재활성화
        }
    }

    private void SetFeedback(string message)
    {
        if (feedbackText == null) return;
        feedbackText.text = message;
    }
}
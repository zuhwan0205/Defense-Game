using System.Collections.Generic;

/// <summary>
/// 백엔드 게임 데이터에서 사용하는 모든 데이터 모델 클래스
/// </summary>
namespace BackendData
{
    [System.Serializable]
    public class PlayerData
    {
        public int gold = 0;
        public int level = 1;
        public int stage = 1;
        public string rowInDate = string.Empty;
    }

    [System.Serializable]
    public class CharacterData
    {
        public int characterId;
        public int level;
    }
}
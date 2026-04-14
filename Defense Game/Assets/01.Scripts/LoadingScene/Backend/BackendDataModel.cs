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

    [System.Serializable]
    public class InventoryItem
    {
        public int itemId;
        public int count;
    }

    // JSON 직렬화 래퍼 — JsonUtility는 List<T> 직렬화를 직접 지원하지 않아 래퍼 클래스 필요
    [System.Serializable]
    public class CharacterListWrapper
    {
        public List<CharacterData> characters = new List<CharacterData>();
    }

    [System.Serializable]
    public class InventoryListWrapper
    {
        public List<InventoryItem> items = new List<InventoryItem>();
    }
}
using UnityEngine;

public class TileRegister : MonoBehaviour
{
    [SerializeField] private Tile[] tiles;

    public Tile[] Tiles => tiles;

    public Tile FindTile()
    {
        for (int i = 0; i < tiles.Length; i++)
        {
            if (!tiles[i].CanSpawn) continue;
            
            if (!tiles[i].IsUnitSpawned)
            {
                return tiles[i];
            }
        }

        return null;
    }
}


#pragma once

struct GameContext;


enum class Scenes
    {
        MainMenu,
        Overworld,
        BattleOverlay,
        GameOver,
        Trade,
        Equipment,
        Inventory,
        Pause,
        Save,
        SavedOverWorld
    };



    
Scenes ShowMainMenu(GameContext &context);
Scenes ShowPauseMenu(GameContext &context);
Scenes ShowGameOverMenu(GameContext &context);
Scenes ShowInventoryMenu(GameContext &context);
Scenes ShowEquipmentMenu(GameContext &context);
Scenes ShowTradeMenu(GameContext &context);
Scenes ShowBattleOverlay(GameContext &context);
Scenes SavedOverWorld(GameContext &context);

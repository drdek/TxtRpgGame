struct GameContext;
#pragma once
#include "menu.h"
#include "CharLogic.h"
#include <unordered_map>
#include <functional>

    std::unordered_map<Scenes, std::function<Scenes(GameContext&)>> SceneFunctions = {
        {Scenes::Pause, ShowPauseMenu},
        {Scenes::GameOver, ShowGameOverMenu},
        {Scenes::Inventory, ShowInventoryMenu},
        {Scenes::Equipment, ShowEquipmentMenu},
        {Scenes::Trade, ShowTradeMenu},
        {Scenes::BattleOverlay, ShowBattleOverlay},
        {Scenes::MainMenu, ShowMainMenu}

};
    struct GameContext {
         Scenes CurrentScene = Scenes::MainMenu;
         int Playtime = 0;
        HumanState Player;
       
    };

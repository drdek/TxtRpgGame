#include <functional>
#include <iostream>
#include "menu.h"
#include "CharLogic.h"
#include <algorithm>
#include <stdexcept>
#include "Dicrector.h"
#include <unordered_map>

using namespace std;

   


    void RunGame(GameContext &context)
    {
       
    unordered_map<Scenes, function<Scenes(GameContext&)>> SceneFunctions = {
        {Scenes::Pause, ShowPauseMenu},
        {Scenes::GameOver, ShowGameOverMenu},
        {Scenes::Inventory, ShowInventoryMenu},
        {Scenes::Equipment, ShowEquipmentMenu},
        {Scenes::Trade, ShowTradeMenu},
        {Scenes::BattleOverlay, ShowBattleOverlay},
        {Scenes::MainMenu, ShowMainMenu},
    };
    while (true)
        {
            auto it = SceneFunctions.find(context.CurrentScene);
            if (it != SceneFunctions.end())
            {
                context.CurrentScene = it->second(context);
            }
            else
            {
                cout << "Invalid scene. Exiting game." << endl;
                break;
            }
        }
    };
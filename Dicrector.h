
#pragma once
#include "menu.h"
#include "CharLogic.h"

void RunGame(GameContext &context); // Function to run the game loop

 struct GameContext {
         Scenes CurrentScene = Scenes::MainMenu;
         int Playtime = 0;
        HumanState Player;
       
    };


#pragma once
#include "menu.h"
#include "CharLogic.h"

struct GameContext
{
    Scenes     CurrentScene = Scenes::MainMenu;
    int        Playtime = 0;
    HumanState Player;              // значение, а не ссылка
};

void RunGame(GameContext &context);
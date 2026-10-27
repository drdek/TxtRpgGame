#include "CharLogic.h"
#include "InputReader.h"
#include <iostream>

void CreateCharacter(HumanState &Player)
{
    Player = HumanState{};              // сброс к значениям по умолчанию из структуры
    Player.name = InputReader("");      // имя читается прямо в игрока
    std::cout << "Character created successfully!" << std::endl;
}

void SavingCharTo()
{
    // позже: сохранение игрока в файл
}
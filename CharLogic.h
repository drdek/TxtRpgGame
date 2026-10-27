#pragma once
#include <string>

struct HumanState
{
    std::string name = "Player";
    int   Health = 100;
    float magic = 100.0f;
    bool  ArmorState = false;
    bool  ArmedState = false;
    float speed = 1.0f;
    float Armor = 0.0f;
    int   gold = 0;
};

void CreateCharacter(HumanState &Player);
void SavingCharTo();
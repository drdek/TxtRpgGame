struct HumanState;
#pragma once
#include <string>

void CreateCharacter(HumanState &Player);

 void SavingCharTo ();

 struct HumanState {
            char name[20] = "Player";
            int Health = 100;
            float magic = 100;
            bool ArmorState = false;
            bool ArmedState = false;
            float speed = 1.0f;
            float Armor = 0.0f;
            int gold = 0;   
          };
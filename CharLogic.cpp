#include "menu.h"
#include <algorithm>
#include <cctype>
#include <fstream>
#include <iostream>
#include "CharLogic.h"

using namespace std;


    // implement char saving character stats and inv to display and load for future use for saving game logic, for now just display stats and inv and equip items and use items, later implement saving to file and loading from file


    void CreateCharacter () // creating character and calling func at end to save it's characteristics to file
    {
        string Pname;
        while (true)
        {
            cout << "Enter your character's name(without numbers or special symbols): ";
            cin >> Pname;
            if (Pname.empty())
            {
                cout << "Name cannot be empty. Please enter a valid name." << endl;
                continue;
            }
            if ( any_of(Pname.begin(), Pname.end(), [](char c) { return !isalpha(c); }))
            {
                cout << "Name cannot contain numbers or special symbols. Please enter a valid name." << endl;
                continue;
            }
            else
            {
                break;
            }
        }
         SavingCharTo(); // Save character to file (functionality to be implemented)
    };



    void SavingCharTo () // Saving char to file near exe of game to easily find 
    {


    };


 



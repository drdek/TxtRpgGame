#include <iostream>
#include <chrono>
#include <thread>
#include "menu.h"
#include "CharLogic.h"
#include "Dicrector.h"
using namespace std;
int InputReader ( int min,  int max);


  int GameTime () //internal game timer, can be used for showing time spent in game, or for time based events, or both etc.
    {
        int Gametime = 0;
        while (true)
        {
            Gametime++;
            this_thread::sleep_for(chrono::seconds(1));
            return Gametime;
        }
    };


    void ShowCharStats (HumanState &Player)
    {
        cout << "Player Name: " << Player.name << endl;
        cout << "Health: " << Player.Health << endl;
        cout << "Magic: " << Player.magic << endl;
        cout << "Armor State: " << (Player.ArmorState ? "Equipped" : "Not Equipped") << endl;
        cout << "Armor: " << Player.Armor << endl;
        cout << "Speed: " << Player.speed << endl;
  
    };


Scenes SavedOverWorld(); // later implement saving in file and loading from file, for now just return to overworld start and varios save files




Scenes ShowMainMenu(GameContext &context)
    {
        cout << "Welcome to the Game!" << endl;
        cout << "1. Start Game" << endl;
        cout << "2. Load Game (currently not working, similar starting new game)" << endl;
        cout << "3. Exit" << endl;
        cout << "Please select an option: ";

        int choice = InputReader(1, 3);

        switch (choice)
        {
            case 1:
                CreateCharacter; // goto CharLogic and create Character and start func
                return Scenes::Overworld;
            case 2:
                // Load game logic here
                return Scenes::Overworld; // Placeholder
            case 3:
                return Scenes::GameOver;
            default:
                return Scenes::MainMenu; // Should never reach here
        }
    } 


    Scenes ShowPauseMenu(GameContext &context)
    {
        cout << "Game Paused" << endl;
        cout << "1. Resume Game" << endl;
        cout << "2. Save Game (currently not working)" << endl;
        cout << "3. Exit to Main Menu" << endl;
        cout << "Please select an option: ";

        int choice = InputReader(1, 3);

        switch (choice)
        {
            case 1:
                return Scenes::Overworld; // Resume game
            case 2:
                // Save game logic here
                return Scenes::Pause; // Placeholder
            case 3:
                return Scenes::MainMenu; // Exit to main menu
            default:
                return Scenes::Pause; // Should never reach here
        }
    }


    Scenes ShowGameOverMenu(GameContext &context)
    {
        cout << "Game Over!" << endl;
        cout << "1. Return to Main Menu" << endl;
        cout << "2. Exit" << endl;
        cout << "3. Load Save (currently not working)" << endl;
        cout << "Please select an option: ";

        int choice = InputReader(1, 3);

        switch (choice)
        {
            case 1:
                return Scenes::MainMenu; // Return to main menu
            case 2:
                return Scenes::GameOver; // Exit game
            case 3:
                // Load save logic here
                return Scenes::Overworld; // Placeholder
            default:
                return Scenes::GameOver; // Should never reach here
        }
    }


    Scenes ShowInventoryMenu(GameContext &context)
    {
        cout << "Inventory Menu" << endl;
        cout << "1. Use Item" << endl;
        cout << "2. Equip Item" << endl;
        cout << "3. Exit Inventory" << endl;
        cout << "Please select an option: ";

        //ShowCharStats(Player); // Display player stats before making a choice

        int choice = InputReader(1, 3);

        switch (choice)
        {
            case 1:
                // Use item logic here
                return Scenes::Inventory; // Placeholder
            case 2:
                // Equip item logic here
                return Scenes::Inventory; // Placeholder
            case 3:
                return Scenes::Overworld; // Exit inventory
            default:
                return Scenes::Inventory; // Should never reach here
        }
    }


    Scenes ShowEquipmentMenu(GameContext &context)
    {
        cout << "Equipment Menu" << endl;
        cout << "1. Equip Weapon" << endl;
        cout << "2. Equip Armor" << endl;
        cout << "3. Exit Equipment" << endl;
        cout << "Please select an option: ";
        
        //ShowCharStats(Player); // Display player stats before making a choice

        int choice = InputReader(1, 3);

        switch (choice)
        {
            case 1:
                // Equip weapon logic here
                return Scenes::Equipment; // Placeholder
            case 2:
                // Equip armor logic here
                return Scenes::Equipment; // Placeholder
            case 3:
                return Scenes::Overworld; // Exit equipment
            default:
                return Scenes::Equipment; // Should never reach here
        }
    }


    Scenes ShowTradeMenu(GameContext &context)
    {
        cout << "Trade Menu" << endl;
        cout << "1. Buy Items" << endl;
        cout << "2. Sell Items" << endl;
        cout << "3. Exit Trade" << endl;
        cout << "Please select an option: ";

        int choice = InputReader(1, 3);

        switch (choice)
        {
            case 1:
                // Buy items logic here
                return Scenes::Trade; // Placeholder
            case 2:
                // Sell items logic here
                return Scenes::Trade; // Placeholder
            case 3:
                return Scenes::Overworld; // Exit trade
            default:
                return Scenes::Trade; // Should never reach here
        }
    }


    Scenes ShowBattleOverlay(GameContext &context)
    {
        cout << "Battle Overlay" << endl;
        cout << "1. Attack" << endl;
        cout << "2. Use Magic" << endl;
        cout << "3. Use Item" << endl;
        cout << "4. Flee" << endl;
        cout << "Please select an option: ";

        int choice = InputReader(1, 4);

        switch (choice)
        {
            case 1:
                // Attack logic here
                return Scenes::BattleOverlay; // Placeholder
            case 2:
                // Use magic logic here
                return Scenes::BattleOverlay; // Placeholder
            case 3:
                // Use item logic here
                return Scenes::BattleOverlay; // Placeholder
            case 4:
                // Flee logic here
                return Scenes::Overworld; // Placeholder for fleeing back to overworld
            default:
                return Scenes::BattleOverlay; // Should never reach here
        }
    }


  
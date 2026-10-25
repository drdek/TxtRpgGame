#include <iostream>
#include <stdio.h>
#include <stdexcept>
#include <thread>
#include <chrono>
#include <limits>
#include "Dicrector.h"
using namespace std; 
     
  /*  int InputProcesser ( int min,  int max)
    {
        int input;
        while (true)
        {
            cin >> input;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a number: ";
                continue;
            }
            else
            {
                break;
            }
        }

         while (true)
        {
            if (input < min || input > max)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a appropriate value: ";
                continue;
            }
            else
            {
                break;
            }
        }
        return input;
    };*/


    string InputReader(string tempo)
    {
        string temp;
        bool check = false;
        printf("Enter your character's name(without numbers or special symbols): ");
       while (check != true ) 
       {
            if (!getline (cin, temp))
            {
                throw runtime_error("Input stream closed unexpectedly.");

            }
            if (temp.empty())
            {
                cout << "Input cannot be empty. Please enter a valid input: ";
                continue;
            }
            if ( any_of(temp.begin(), temp.end(), []( unsigned char c) { return !isalpha(c); }))
            {
                cout << "Input cannot contain numbers or special symbols. Please enter a valid input: ";
                continue;
            }
            else
            {
                check = true;
            }
            tempo = temp;
       }
       return tempo;
    };
    




    int main () 
    {
        GameContext context;
        try {
            
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
        };
    
        }
        catch (const std::exception& e)
        {
            std::cerr << "An error occurred: " << e.what() << std::endl;
        }
        cout << "Exiting game. Goodbye!" << endl;
        return 0;
    }
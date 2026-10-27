#include "InputReader.h"
#include <iostream>
#include <limits>
#include <algorithm>
#include "CharLogic.h"
#include "Prompts.h"
using namespace std;


 int InputReader ( int min,  int max)
    {
       int choice;
       string str;
       bool check = false;
    cout << Prompts::Choice;
       while (check != true ) 
       {
            if (!getline (cin, str))
            {
                throw runtime_error("Input stream closed unexpectedly.");

            }
            if (str.empty())
            {
                cout << "Input cannot be empty. Please enter a valid input: ";
                continue;
            }
            if (!all_of(str.begin(), str.end(), [](unsigned char c){ return isdigit(c); }))
             {
                cout << "Input must be a digit. Please enter a valid input: ";
                continue;
            }
            if (stoi(str) < min || stoi(str) > max)
            {
                cout << "Input must be between " << min << " and " << max << ". Please enter a valid input: ";
                continue;
            }   
            else
            {
                check = true;
            }
            choice  = stoi(str);
       }
       return choice;
    };

    string InputReader(string tempo)
    {
        string temp;
        bool check = false;
        cout << Prompts::Name;
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
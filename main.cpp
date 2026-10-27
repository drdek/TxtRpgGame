#include "Dicrector.h"
#include <iostream>
#include <exception>
using namespace std;

    
    int main () 
    {
        try {

            GameContext context;
            RunGame(context);
        }

         catch (const std::exception& e)
        {
            std::cerr << "An error occurred: " << e.what() << std::endl;
        }
        cout << "Exiting game. Goodbye!" << endl;
        return 0;
    }
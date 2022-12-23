/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "sudoku.h"

using namespace std;

int main()
{
    Grid game;

    while (game.gameIsRunning())
    {
        system("clear");
        cout << game << '\n';
        cin >> game;
    }

    system("clear");
    cout << game << "\nYou Win!\n";

    return 0;
}

#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int maxNum) : maxNumber(maxNum), numOfGuesses (0)        // Constructor
{
    srand(time(nullptr));                                           // Random number generator
    randomNumber = rand() % maxNumber + 1;                          // Random number between 1 and max number
    cout << "¡Debug! Constructor. maxNum on " << maxNum << endl;    // 2. Debug
}

Game::~Game()                                                       // Destructor
{
    cout << " ¡Debug! Destructor. GG Well played." << endl;         // 2. Debug
}

void Game::play()                                                   // Play Method
{
    cout << "¡Debug! Arvauspeli! " << endl;                         // 2. Debug
    int arvaus;
    while (true)
    {
        cout << "Anna luku (1-40) " << ": ";
        cin >> playerGuess;
        numOfGuesses++;
        cout << "¡Debug! Sinun arvaus on: " << playerGuess << ". Arvauksia: " << numOfGuesses << endl;    // 2. Debug

        if (playerGuess == randomNumber)
        {
            cout << "Oikein!" << endl;
            break;
        }
        else if (playerGuess < randomNumber)
        {
            cout << "Luku on isompi, kokeile uudestaan" << endl;
        }
        else
        {
            cout << "Luku on pienempi, kokeile uudestaan" << endl;
        }
    }
}

void Game::printGameResult()                                        // Print game result method
{
    cout << "¡Debug! printGameResult()." << endl;                   // 2. Debug
    cout << "Arvauksia (total): " << numOfGuesses << "." << endl;
}

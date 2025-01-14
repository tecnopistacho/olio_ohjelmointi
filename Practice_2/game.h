#ifndef GAME_H
#define GAME_H

class Game
{
private:
    int maxNumber;          // Max number, in this case 40
    int playerGuess;        // Player's number of guesses (present)
    int randomNumber;       // Generated random number
    int numOfGuesses;       // Number of guesses the player made

public:
    Game(int maxNum);       // Constructor
    ~Game();                // Destructor

    void play();            // Function to play the game
    void printGameResult(); // Print out game results
};

#endif                      // GAME_H

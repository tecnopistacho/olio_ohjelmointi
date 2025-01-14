#include <iostream>
#include "game.h"

using namespace std;

int main()
{
    int maxNumber = 40;                                               // We set up the max number to 40 as the exercise asked to

    cout << "¡Debug! New game, max number is: " << maxNumber << endl; // 2. Debug
    Game game(maxNumber);                                             // Create a Game Object
    game.play();                                                      // Start the game
    game.printGameResult ();                                          // Print out the final result

    cout << "¡Debug! Game finished."<< endl;                          // 2. Debug

    /* int maxnum = 40;        // You can adjust the max number here
    Game game(maxnum);      // Create a Game object
    game.play();            // Start the game
    game.printGameResult(); // Print the result of the game*/

    return 0;
}

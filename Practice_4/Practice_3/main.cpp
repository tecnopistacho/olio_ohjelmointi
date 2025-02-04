// With main.cpp we will test Chef and ItalianChef classes
// Creates a Chef object named "Gordon" and tests its salad and soup making functions
// Creates an ItalianChef object named "Mario". Calls makeSalad() function and tests the password-protected makePizza function
#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef chef1("Gordon");
    chef1.makeSalad(11);                // Should make 2 portions
    chef1.makeSoup(14);                 // Should make 4 portions

    ItalianChef chef2("Mario");
    chef2.makeSalad(9);                 // Inherits this from Chef
    chef2.askSecret("pizza", 12, 12);   // Should make 2 portions
    return 0;
}

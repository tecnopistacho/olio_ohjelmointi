#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"               // include chef.h because ItalianChef inherits from Chef class
#include <string>
using namespace std;

class ItalianChef : public Chef // Class declaration, inherits Chef with public access
{
private:
    string password = "pizza";  // Private password, initialized to "pizza"
    int flour, water;

    int makePizza(int flour, int water); // Private function that calculates how many pizzas can be made based
                                         // on the amound of water and flour. It cannot be called directly outside the class.

public:                         // Public functions
    ItalianChef(string name);   // Constructor
    ~ItalianChef();             // Destructor

    bool askSecret(string pass, int flour, int water); // Checks if password is OK, if OK -> call makePizza()
};

#endif // ITALIANCHEF_H

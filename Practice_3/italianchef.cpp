#include "italianchef.h"
#include <iostream>
#include <algorithm> // for std::min
using namespace std;

ItalianChef::ItalianChef(string name) : Chef(name)  // Constructor, calls Chef constructor with the name + Debug msg
{
    cout << "ItalianChef " << chefName << " constructor" << endl;
}
ItalianChef::~ItalianChef()                         // Destructor + Debug msg
{
    cout <<"ItalianChef " << chefName << " destructor" << endl;
}

int ItalianChef::makePizza(int flour, int water)    // Private function. Calculates how many pizzas can be made.
{                                                   // Each pizza requires 5 units of flour and 5 of water
    int pizzas = min(flour / 5, water / 5);
    cout << "ItalianChef " << chefName << " with " << flour // Debug msg
         << " flour and " << water << " water can make "
         << pizzas << " pizzas " << endl;
    return pizzas;
}

bool ItalianChef::askSecret(string pass, int flour, int water) // Public function. Compares the provided password
                                                               // (pass) with the stored password (password). If ok,
                                                               // calls makePizza() function.
{
    if (pass == password)
    {
        cout << "Password ok!" << endl;
        this->flour = flour;
        this->water = water;
        makePizza(flour, water);
        return true;
    }
    else
    {
        cout << "Wrong password!" << endl;
        return false;
    }
}

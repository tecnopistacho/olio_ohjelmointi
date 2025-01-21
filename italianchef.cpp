#include "italianchef.h"
#include <iostream>
#include <algorithm> // for std::min
using namespace std;

ItalianChef::ItalianChef(string name) : Chef(name)
{
    cout << "ItalianChef " << chefName << " constructor" << endl;
}
ItalianChef::~ItalianChef()
{
    cout <<"ItalianChef " << chefName << " destructor" << endl;
}

int ItalianChef::makePizza(int flour, int water)
{
    int pizzas = min(flour / 5, water / 5);
    cout << "ItalianChef " << chefName << " with " << flour
         << " flour and " << water << " water can make "
         << pizzas << " pizzas " << endl;
    return pizzas;
}

bool ItalianChef::askSecret(string pass, int flour, int water)
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

#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"
#include <string>
using namespace std;

class ItalianChef : public Chef
{
private:
    string password = "pizza";
    int flour, water;

    int makePizza(int flour, int water);

public:
    ItalianChef(string name);
    ~ItalianChef();

    bool askSecret(string pass, int flour, int water);
};

#endif // ITALIANCHEF_H

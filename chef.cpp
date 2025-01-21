#include "chef.h"
#include <iostream>
using namespace std;


Chef::Chef(string name) : chefName(name)
{
    cout << "Chef " << chefName << " constructor" << endl;
}
Chef::~Chef()
{
    cout << "Chef " << chefName << " destructor" << endl;
}

string Chef::getName()
{
    return chefName;
}

int Chef::makeSalad(int ingredients)
{
    int portions = ingredients / 5;
    cout << "Chef " << chefName << " with " << ingredients
         << "items can make salad " << portions << " portions" << endl;
    return portions;
}

int Chef::makeSoup(int ingredients)
{
    int portions = ingredients / 3;
    cout << "Chef" << chefName << " with " << ingredients
         << "items can make soup " << portions << " portions" << endl;
    return portions;
}

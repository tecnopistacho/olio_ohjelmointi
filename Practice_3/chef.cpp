#include "chef.h" // We include the chef header file for declarations
#include <iostream>
using namespace std;


Chef::Chef(string name) : chefName(name) // Constructor, initializes the chefName member variable with the value name
{
    cout << "Chef " << chefName << " constructor" << endl; // Debug msg
}
Chef::~Chef() // Destructor,
{
    cout << "Chef " << chefName << " destructor" << endl; // Debug msg
}

string Chef::getName() // Returns the name of the chef
{
    return chefName;
}

int Chef::makeSalad(int ingredients) // Calculates how many salads can be made from ingredients + Debug msg, returns number of portions
{
    int portions = ingredients / 5;
    cout << "Chef " << chefName << " with " << ingredients
         << "items can make salad " << portions << " portions" << endl;
    return portions;
}

int Chef::makeSoup(int ingredients) // Same but with soup
{
    int portions = ingredients / 3;
    cout << "Chef" << chefName << " with " << ingredients
         << "items can make soup " << portions << " portions" << endl;
    return portions;
}

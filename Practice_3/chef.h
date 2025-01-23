// Chef header file, which declares the Chef class, its member variables and its methods.
#ifndef CHEF_H
#define CHEF_H

#include <string> // Library to work with std::string
using namespace std;


class Chef      // Chef class declaration
{
protected:
    string chefName; // chefName is protected, only accessible within Chef class and any classes derived from it (like ItalianChef class)

public:
    Chef(string name); // Constructor, takes a name for the chef
    ~Chef();           // Destructor

    string getName();  // Returns Chef's name
    int makeSalad(int ingredients); // Calculates how many salads can be made from ingredients
    int makeSoup(int ingredients);  // Calculates how many soups can be made from ingredients
};

#endif // CHEF_H

#include "seuraaja.h"
#include <iostream>

using namespace std;


Seuraaja::Seuraaja(string n)
{
    nimi = n;
    cout << "Luodaan seuraaja " << nimi << endl;
}

string Seuraaja::getNimi() const
{
    return nimi;
}

void Seuraaja::paivitys(string viesti)
{
    cout << "Seuraaja " << nimi << " sai viestin" << endl;
}

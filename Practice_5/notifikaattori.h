#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include <iostream>
#include "seuraaja.h"

using namespace std;

class Notifikaattori
{
public:
    Notifikaattori();
    void lisaa(Seuraaja *seur);
    void poistaa(Seuraaja *seur);
    void tulosta();
    void postita(string viesti);

private:
    Seuraaja *seuraajat = nullptr; // Listan alkupiste
};

#endif // NOTIFIKAATTORI_H

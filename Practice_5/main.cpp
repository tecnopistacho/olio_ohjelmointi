#include <iostream>
#include <memory>
#include "seuraaja.h"
#include "notifikaattori.h"

using namespace std;

int main()
{
    Seuraaja *A = new Seuraaja("Anchoa");
    Seuraaja *B = new Seuraaja("Boniato");
    Seuraaja *C = new Seuraaja("Conchita");

    Notifikaattori *N = new Notifikaattori();
    cout << endl;

    N->lisaa(A);
    N->lisaa(B);
    N->lisaa(C);

    N->tulosta();

    cout << endl;
    N->poistaa(B);
    cout << endl;

    N->postita("Buenos días!");

    //N->poistaa(C);
/*
    A->next = B;
    B->next = C;

    Seuraaja *alku = A;
    while (alku != nullptr)
    {
        cout << "Listassa nyt = " << alku->getNimi() << endl;
        alku->paivitys("¡Buenos días!");
        alku  = alku->next;
        if (alku != nullptr)
        {
            cout << "Listassa seuraava = " << alku->getNimi() << endl;

        }
        else
        {
            cout << "Lista loppui." << endl;
        }
    } */

    delete A;
    delete B;
    delete C;

    delete N;

    cout << endl;

    return 0;
}

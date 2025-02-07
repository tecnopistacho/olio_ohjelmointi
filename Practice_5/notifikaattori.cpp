#include "notifikaattori.h"
#include <iostream>

using namespace std;

Notifikaattori::Notifikaattori() {}

void Notifikaattori::lisaa(Seuraaja *uusiSeur)
{
    // 1. uusiSeur->next =
    uusiSeur->next = seuraajat;
    // 2. seuraajat =
    seuraajat = uusiSeur;

    cout << "Lisätään seuraaja " << uusiSeur->getNimi() << endl;

    // kalvoilla
    // uusiseuraaja a
    // vanhaseuraaja b
    // alku on seuraajat
    // eli tehdään
    // 1. a->next = b
    // 2. alku = a
}

void Notifikaattori::poistaa(Seuraaja *poistSeur)
{
    cout << "Poistetaan seuraaja " << poistSeur->getNimi() << endl;

    Seuraaja *alku = seuraajat;
    while (alku != nullptr)
    {
        if(alku->next == poistSeur)
        {
            alku->next = poistSeur->next;
        }
        alku = alku->next;
    }

    // poistseur = P
    // kelataan listaa alkaen seuraajat
    // alku = seuraajat
    // testaa onko alku->next=P
        // jos ei ole, alku = alku->next
        // ...
        // alku = A, alku = alku->next
        // alku = B, alku = alku->next
        // ...
        // alku = P, alku = alku->next
            // while (alku->next == P) on, eli poisto
            // O->next = P->next
    // ...

    // seuraajat->A A->next=B
    // B->next=C
    // C->next=D
    // ...

    // Jos haluamme poistaa C
    // seuraajat->A A->next=B
    // B->next=D
    // ...
}

void Notifikaattori::tulosta()
{
    cout << "Tulostetaan seuraajien lista" << endl;

    Seuraaja *alku = seuraajat;
    while (alku != nullptr)
    {
        cout << alku->getNimi() << endl;
        alku  = alku->next;
    }
}

void Notifikaattori::postita(string viesti)
{
    cout << "Notifikaattori postaa viestin: " << viesti << endl;
    Seuraaja *alku = seuraajat;
    while (alku != nullptr)
    {
        cout << "Seuraaja " << alku->getNimi() << " sai viestin: " << viesti << endl;
        alku = alku->next;

    }
}

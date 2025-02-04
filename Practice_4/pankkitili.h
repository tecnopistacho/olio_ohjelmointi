#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>

using namespace std;

class Pankkitili
{
public:
    //Pankkitili(string nimi);
    Pankkitili();
    Pankkitili (string o);

    virtual double getBalance();
    virtual bool deposit(double summa);
    virtual bool withdraw(double summa); // Function prototype


protected:
    string omistaja;
    double saldo = 1000;

};

#endif // PANKKITILI_H

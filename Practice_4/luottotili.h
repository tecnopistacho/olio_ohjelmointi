#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "pankkitili.h"                 // Luottotili-luokka perii Pankkitilin

class Luottotili : public Pankkitili    // Luottotili-luokka perii Pankkitilin
{
public:
    Luottotili();
    Luottotili(string o, double lr);

    virtual bool withdraw(double summa) override;
    virtual bool deposit(double summa) override;


protected:
    double luottoRaja = 0;
};

#endif // LUOTTOTILI_H

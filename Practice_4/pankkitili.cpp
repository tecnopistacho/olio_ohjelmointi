#include "pankkitili.h"

Pankkitili::Pankkitili(string nimi)
{

}

double Pankkitili::getBalance()
{
    cout << "Saldo = ";
    return saldo;
}

bool Pankkitili::deposit(double summa)
{
    if (summa < 0)
    {
        cout << "Talletus ei onnistu, summa on negatiivinen." << endl;
        return false;
    }
    if (summa > 0)
    {
        saldo = saldo + summa;
        cout << "Päivitetty saldo = " << saldo << endl;
        return true;
    }
}

bool Pankkitili::withdraw(double summa)
{
    if (summa < 0) // Negatiivisia nostoja / talletuksia ei voi tehdä. Esimnoston parametriksi ei voi antaa summaa -123.45.
    {
        cout << "Nosto ei onnistu, summa negatiivinen" << endl;
        cout << "saldo = " << saldo << " summa = " << summa << endl;
        return false;
    }

    if ((saldo-summa) < 0) // Pankkitilin saldo ei saa mennä negatiiviseksi, elienempää ei voi nostaa kun mitä saldo on.
    {
        cout << "Nosto ei onnistu, liian iso summa" << endl;
        cout << "saldo = " << saldo << " summa = " << summa << endl;
        return false;
    }

    else // Nämä jäsenfunktiot palauttavat true/false senmukaan onnistuiko talletus/nosto. Päivitetään saldo, vähennetaan nostettu summa ja palautetaan true.
    {
        cout << "Nosto onnistui." << endl;
        saldo = saldo - summa;
        cout << "Päivitetty saldo = " << saldo << endl;
        return true;
    }
}

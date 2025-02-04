#include "luottotili.h"
#include "pankkitili.h"

Luottotili::Luottotili(): Pankkitili("")
{
}

Luottotili::Luottotili(string o, double lr)
    : Pankkitili(o)
{
    luottoRaja = lr;
    saldo = 0;
    // cout << "Luottoraja on " << luottoRaja << endl;
}

bool Luottotili::withdraw(double summa)
{
    cout << "Summa on " << summa << " (Luotto)." << endl;

    if (summa < 0) // Negatiivisia nostoja / velanmaksuja ei voi tehdä. Esimvelanmaksun parametriksi ei voi antaa summaa -123.
    {
        cout << "Summa on negatiivinen, nosto ei onnistu.(Luotto)" << endl;
        return false;
    }

    if ((saldo+summa) > luottoRaja) // Luottotilin saldo saa mennä negatiiviseksi, mutta eialle luottorajan.
    {
        cout << "Velkaa on isompi kuin luottorajaa, nosto ei onnistu (Luotto)" << endl;
        return false;
    }

    else // Muutoin lisätään saldoon summa
    {
        saldo = saldo + summa;
        cout << "Nosto onnistui, nyt saldo on " << saldo << " (Luotto)" << endl;
        return true;
    }
    cout <<" "<< endl;
}

bool Luottotili::deposit(double summa)
{
    if (summa < 0)
    {
        cout << "Summa on negatiivinen, talletus ei onnistu (Luotto)" << endl;
        return false;
    }
    if ((saldo-summa) < 0)
    {
        cout << "Maksat liikaa velkaa, talletus ei onnistu (Luotto)" << endl;
        return false;
    }
    else
    {
        cout << "Talletus: " << summa << endl;
        saldo = saldo - summa;
        cout << "Nykyinen velka on " << saldo << endl;
    }
}

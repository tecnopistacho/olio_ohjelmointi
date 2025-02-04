#include "asiakas.h"

Asiakas::Asiakas(string nimi, double lr)
    : nimi(nimi), kayttotili(nimi), luottotili(nimi, lr)
{
    //n = nimi;
    cout << "Pankkitili luotu, omistajan nimi " << nimi << endl;
    cout << "Luottotili luotu, omistajan nimi " << nimi << endl;
    cout << "Luottoraja on "  << lr << "." << endl;
    showSaldo();
    cout<<endl;


}

string Asiakas::getNimi()
{
    //cout << "Tilin omistajan nimi on " << nimi << endl;
    return nimi;
}

void Asiakas::showSaldo() // Tulostaa molempin tilien saldot ruudulle.

{
    cout << "Käyttötilin  ";
    cout << kayttotili.getBalance();
    cout << " euroa." << endl;

    cout << "Luottotilin";
    cout << luottotili.getBalance();
    cout << " euroa." << endl;
}

bool Asiakas::talletus(double summa)
{

    bool ret = kayttotili.deposit(summa);
    if (ret == false)
    {
        cout << "Talletus ei onnistu" << endl;
    }
    else
    {
        cout << "Talletus onnistui." << endl;
        cout << "Tilille laitettu " << summa << " euroa." << endl;
        cout << "Päivitetty saldo on ";
        showSaldo();
        cout << endl;
        return ret;
    }
    //return ret;
    // tai voidaan tehdä --> return kayttotili.deposit(summa);
}

bool Asiakas::nosto(double summa)
{
    bool ret = kayttotili.withdraw(summa);

    if(ret == false)
    {
        cout << "Nosto ei onnistu." << endl;
    }
    else
    {
        cout << "Nosto onnistui." << endl;
        cout << "Tilille laitettu " << summa << " euroa." << endl;
        cout << "Päivitetty saldo on ";
        showSaldo();
        cout << endl;
        return ret;
    }
}

bool Asiakas::luotonMaksu(double summa)
{
    bool ret = luottotili.deposit(summa);

    if (ret == false)
    {
        cout << "Luottomaksu ei onnistu."<< endl;
    }
    else
    {
        cout << "Luottomaksu onnistui." << endl;
        return ret;
    }
}

bool Asiakas::luotonNosto(double summa)
{
    bool ret = luottotili.withdraw(summa);

    if (ret == false)
    {
        cout << "Luottonosto ei onnistu." << endl;
    }
    else
    {
        cout << "Luottonosto onnistui." << endl;
        return ret;
    }
}

bool Asiakas::tiliSiirto(double summa, Asiakas &saaja) // parametrinä siirrettävä summa ja viittaus Asiakas-luokan olioon
{
    /* - tiliSiirto, jossa on parametrinä ensin siirrettävä summa ja sitten viittaus Asiakas-luokan olioon,
     * kenelle summa siirretään.
    - Siirron voi tehdä pankkitililtä toiselle, ei luottotililtä luottotilille.
    - Nyt operaatiossa täytyy ensin nostaa rahat tililtä ja sen jälkeen tallettaa nostetut rahat parametrinä
    annetun asiakkaan tilille.
    - Tietysti tässä pätee samat säännöt kuin aiemmin:tilillä pitää olla tarpeeksi rahaa, negat siirtoa eivoi tehdä, jne. */

    // 1. nosto omalta tililta
    bool onnistuiko = kayttotili.withdraw(summa);

    // 2. onnistuiko nosto
    if (onnistuiko == false)
    {
        cout << "Tilisiirto ei onnistu." << endl;
    }
        // 2.1 jos onnistui, talleta saajan tilille
    else
    {
        cout << "Käyttäjä " << nimi << " teki tilisiirto." << endl;
        cout << "Siirron summa on " << summa << " euroa."  << endl;
        cout << "Saaja on " << saaja.getNimi() << "." << endl;
        saaja.talletus(summa);
    }
}

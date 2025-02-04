// Viikkotehtävä 4: Pankkitili. Kts. luokkakavio
#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    //Pankkitili pa("Gordon");

    //pa.getBalance();
    //pa.withdraw();
    //pa.deposit();
    //pa.getBalance();

    //Luottotili lu("Gordon", 500);
    //lu.withdraw(300);
    //lu.deposit(200);
    //lu.deposit();
    //lu.getBalance();

    Asiakas A("La Cristo", 1500);
    Asiakas B("Coco La YoNoFumo", 1000);
    //Asiakas C("Sargento MariPorro", 3000);

    cout <<
    A.luotonNosto(200);

    A.luotonMaksu(100);

    A.talletus(5);

    A.nosto(30);


    //tilisiirto a:lta b:lle
    A.tiliSiirto(50, B);
    //tili siirto b:lta c:lle
    //B.tiilisiirto(50, C);


    return 0;
}

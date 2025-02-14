#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int game(int maxnum);     // Function prototype

int main()
{
    int arvausten_lkm = 0;
    int maxnum = 40;
    arvausten_lkm = game(maxnum);
    cout << "Arvauksia: "
         << arvausten_lkm
         << endl;

    return 0;
}

int game(int maxnum)      // Function definition
{
    int arvausten_lkm = 0; // How many times user tried guessing the random nº until it got it right
    int satunnaisluku = 0; // Random nº
    int arvaus = 0;        // User's guess

    cout << "Maxnum = " << maxnum << endl;

    // 1. Arvotaan satunnainen luku
    srand(time(NULL)); // time() creates random numbers, it uses the time, so the random number wont be the same
    satunnaisluku = rand() % maxnum;

    while (true){         // 5. Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2. --> for / while / do while
        // 2. Kysytään pelaajalta arvaus
        cout << "Anna luku? " << endl;  // We ask the user for input
        cin >> arvaus;          // We save the input given by the user in the variable, we read
        arvausten_lkm++;        // When player makes a guess arvausten_lkm +1
        // 3. Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
        if (arvaus == satunnaisluku)
        {   // 3.1. Jos arvaus yhtäsuuri kuin satunnaisluku
            cout << "Oikein!" << endl;
            break;
        }// 4. Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus”
        if (arvaus < satunnaisluku)
        {   // 3.2. Jos arvaus pienempi kuin satunnaisluku
            cout << "Luku on isompi, kokeile uudestaan" << endl;
        }
        if (arvaus > satunnaisluku)
        {   // 3.3. Jos arvaus suurempi kuin satunnaisluku
            cout << "Luku on pienempi, kokeile uudestaan" << endl;
        }
    }
    return arvausten_lkm;
}

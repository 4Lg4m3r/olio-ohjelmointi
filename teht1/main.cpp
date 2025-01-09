#include <iostream>
#include <ctime>

using namespace std;

int game(int maxnum);

int main()
{
    int arvaus_lkm = 0;
    int maxnum = 40;
    arvaus_lkm = game(maxnum);

    cout << "Arvauksia kaikkiaan: "
         << arvaus_lkm
         << endl;

    return 0;
}


int game(int maxnum) {
    srand(time(NULL));

    int satunnaisluku = rand() % maxnum;
    int arvaus;
    int arvaus_lkm;

    cout << "Maxnum = "
         << maxnum
         << endl;

    while (arvaus != satunnaisluku) {
        cout << "Anna luku: "
             << endl;
        cin >> arvaus;
        arvaus_lkm++;

        if (arvaus < satunnaisluku) {
            cout << "Luku on suurempi"
                 << endl;
        }

        else if (arvaus > satunnaisluku) {
            cout << "Luku on pienempi"
                 << endl;
        }
    }

    if (arvaus == satunnaisluku) {
        cout << "Oikea luku!"
             << endl;
    }

    return arvaus_lkm;
}

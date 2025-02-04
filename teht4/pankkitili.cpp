#include "pankkitili.h"
#include <iostream>
#include <string>

using namespace std;

Pankkitili::Pankkitili(string o) {
    cout << "Pankkitili luotu "
         << o
        << ":lle"
         << endl;
}

Pankkitili::~Pankkitili() {

}

bool Pankkitili::deposit(double summa) {
    if (saldo >= 0) {
        saldo = saldo += summa;
        cout << "Pankkitilille on talletettu "
             << summa
             << " euroa"
             << endl;
        return true;
    } else {
        cout << "Tallettaminen epäonnistui" << endl;
        return false;
    }
}

bool Pankkitili::withdraw(double summa) {
    if (summa <= 0 || summa > saldo ) {
        cout << "Nostoa ei voida suorittaa"
             << endl;
        return false;
    } else {
        saldo = saldo - summa;
        cout << "Pankkitililtä nostettiin "
             << summa
             << " euroa"
             << endl;
        return true;
    }
}

double Pankkitili::getBalance() {
    return saldo;
}

#include "luottotili.h"

Luottotili::Luottotili(string o, double lr) : Pankkitili(o) {
    luottoRaja = lr;
    cout << "Luottotili luotu "
         << o
         << ":lle, luottoraja "
         << luottoRaja
         << endl;
}

Luottotili::~Luottotili() {
    cout << "DESTRUCTOR: Luottotili"
         << endl;
}

bool Luottotili::deposit(double summa) {
    if (luottoRaja + summa >= 0) {
        cout << "Luottotilille talletus epäonnitui"
             << endl;
        return false;
    } else {
        saldo = saldo + summa;
        cout << "Luottotilille talletettiin "
             << summa
             << " euroa"
             << endl;
        return summa;
    }
}

bool Luottotili::withdraw(double summa) {
    if (summa <= 0 || saldo + summa < luottoRaja) {
        cout << "Nostoa ei voida suorittaa"
             << endl;
        return false;
    } else {
        saldo = saldo + summa;
        cout << "Luottotililtä nostettiin "
             << summa
             << " euroa"
             << endl;
        return true;
    }
}

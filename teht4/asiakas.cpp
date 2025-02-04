#include "asiakas.h"

Asiakas::Asiakas(string o, double lr)
    : kayttotili(o), luottotili(o, lr)
{

}

Asiakas::~Asiakas() {

}

bool Asiakas::tiliSiirto(double summa, Asiakas &saaja) {
    // 1 nosta omalta tililtä
    nosto(summa);
    // 2. talleta saajan tilille
    saaja.talletus(summa);
    return 0;
}

string Asiakas::getNimi() {
    return 0;
}

void Asiakas::showSaldo() {
    cout << "Pankkitilin saldo: "
        << kayttotili.getBalance()
         << endl;
    cout << "Luottotilin saldo: "
        << luottotili.getBalance()
         << endl;
}

bool Asiakas::talletus(double summa) {
    return kayttotili.deposit(summa);
}

bool Asiakas::nosto(double summa) {
    return kayttotili.withdraw(summa);
}

bool Asiakas::luotonMaksu(double summa) {
    return luottotili.deposit(summa);
}

bool Asiakas::luotonNosto(double summa) {
    return luottotili.withdraw(summa);
}



#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{

    Pankkitili pankkitili("Jarmo");
    pankkitili.deposit(23.3);
    pankkitili.getBalance();
    pankkitili.withdraw(20.1);
    pankkitili.getBalance();

    Luottotili luottotili("Keijo", -250);
    luottotili.deposit(249);
    luottotili.getBalance();
    luottotili.withdraw(200);
    luottotili.getBalance();

    Asiakas A("Jarmo", 1000);
    Asiakas B("Keijo", 1000);

    A.tiliSiirto(50,B);

    A.showSaldo();
    B.showSaldo();
    return 0;
}

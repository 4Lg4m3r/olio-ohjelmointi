#ifndef ASIAKAS_H
#define ASIAKAS_H

#include "pankkitili.h"
#include "luottotili.h"

class Asiakas
{
public:
    Asiakas(string o, double lr);
    ~Asiakas();

    string getNimi();
    void showSaldo();
    bool talletus(double summa);
    bool nosto(double summa);
    bool luotonMaksu(double summa);
    bool luotonNosto(double summa);

    bool tiliSiirto(double summa, Asiakas &saaja);

private:
    string o;
    Pankkitili kayttotili;
    Luottotili luottotili;
};

#endif // ASIAKAS_H

#include "seuraaja.h"

Seuraaja::Seuraaja(string n) : nimi(n), next(nullptr) {
    cout << "Luodaan seuraaja "
         << nimi
         << endl;
}

string Seuraaja::getNimi() const {
    return nimi;
}

void Seuraaja::paivitys(string viesti) {
    cout << nimi
         << " sai viestin "
         << viesti
         << endl;
}




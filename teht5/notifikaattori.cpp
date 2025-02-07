#include "notifikaattori.h"

Notifikaattori::Notifikaattori() : seuraajat(nullptr) {
    cout << "Luodaan notifikaattori" << endl;
}

void Notifikaattori::lisaa(Seuraaja* seuraaja) {
    cout << "Notifikaattori lisaa seuraajan "
         << seuraaja->getNimi()
         << endl;
    seuraaja->next = seuraajat;
    seuraajat = seuraaja;
}

void Notifikaattori::poista(Seuraaja* seuraaja) {
    if (seuraajat == nullptr) return;
    cout << "Notifikaattori poistaa seuraajan "
         << seuraaja->getNimi()
         << endl;
    if (seuraajat == seuraaja) {
        seuraajat = seuraajat->next;
        return;
    }
    Seuraaja* current = seuraajat;
    while (current->next != nullptr) {
        if (current->next == seuraaja) {
            current->next = seuraaja->next;
            return;
        }
        current = current->next;
    }
}

void Notifikaattori::tulosta() {
    Seuraaja* current = seuraajat;
    while (current != nullptr) {
        cout << "Seuraaja "
             << current->getNimi()
             << endl;
        current = current->next;
    }
}

void Notifikaattori::postita(string viesti) {
    cout << "Notifikaattori postaa viestin "
         << viesti
         << endl;
    Seuraaja* current = seuraajat;
    while (current != nullptr) {
        current->paivitys(viesti);
        current = current->next;
    }
}

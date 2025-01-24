#include "italianchef.h"

ItalianChef::ItalianChef(string name) : Chef(name), password("pizza") {
    cout << "CONSTRUCTOR: ItalianChef "
         << name
         << endl;
}

ItalianChef::~ItalianChef() {
    cout << "DESTRUCTOR: ItalianChef "
         << chefName
         << endl;
}

bool ItalianChef::askSecret(string password, int flour, int water) {
    if (password == "pizza") {
        cout << "Password ok!" << endl;
        return makePizza(flour, water) > 0;
    } else {
        return false;
    }
}

int ItalianChef::makePizza(int flour, int water) {
    int maxPizzaF = flour / 5;
    int maxPizzaW = water / 5;
    int pizzas = min(maxPizzaF, maxPizzaW);
    cout << "ItalianChef "
         << chefName
         << " with "
         << flour
         << " flour and "
         << water
         << " water can make "
         << pizzas
         << " pizzas"
         << endl;

    return pizzas;
}

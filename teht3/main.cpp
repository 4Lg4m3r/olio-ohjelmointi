#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef chef("Gordon");
    chef.makeSalad(11);
    chef.makeSoup(14);

    cout << endl;

    ItalianChef italianChef("Mario");
    italianChef.makeSalad(9);
    italianChef.makeSoup(5);

    cout << endl;

    italianChef.askSecret("pizza", 12, 12);

    cout << endl;

    return 0;
}

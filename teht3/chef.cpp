#include "chef.h"

using namespace std;

Chef::Chef(string name) : chefName(name) {
    cout << "CONSTRUCTOR: Chef "
         << chefName
         << endl;
}

Chef::~Chef() {
    cout << "DESTRUCTOR: Chef "
         << chefName
         << endl;
}

int Chef::makeSalad(int ingredients) {
    int portions = ingredients / 5;
    cout << "Chef "
         << chefName
         << " with "
         << ingredients
         << " ingredients can make salad "
         << portions
         << " portions"
         << endl;

    return portions;
}

int Chef::makeSoup(int ingredients) {
    int portions = ingredients / 3;
    cout << "Chef "
         << chefName
         << " with "
         << ingredients
         << " ingredients can make soup "
         << portions
         << " portions"
         << endl;

    return portions;
}

string Chef::getName() {
    return chefName;
}

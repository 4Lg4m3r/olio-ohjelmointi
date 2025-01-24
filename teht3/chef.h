#ifndef CHEF_H
#define CHEF_H

#include <iostream>
#include <string>

using namespace std;

class Chef
{
public:
    Chef(string name);
    ~Chef();

    int makeSalad(int ingredients);
    int makeSoup(int ingredients);

    string getName();

protected:
    string chefName;
};

#endif // CHEF_H

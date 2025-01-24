#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(string name);
    ~ItalianChef();

    bool askSecret(string password, int flour, int water);

private:
    int makePizza(int flour, int water);

    string password;
};

#endif // ITALIANCHEF_H

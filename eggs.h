#ifndef EGGS_H
#define EGGS_H
#include "nontaxable.h"

class Eggs : public Nontaxable
{
public:
    Eggs();
    virtual QString display();
    virtual double get_price();
    virtual ~Eggs();
};

#endif // EGGS_H

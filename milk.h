#ifndef MILK_H
#define MILK_H
#include "nontaxable.h"

class Milk : public Nontaxable
{

public:
    Milk();
    virtual QString display();
    virtual double get_price();
    virtual ~Milk();
};

#endif // MILK_H

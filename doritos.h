#ifndef DORITOS_H
#define DORITOS_H
#include "nontaxable.h"

class Doritos : public Nontaxable
{
public:
    Doritos();
    virtual QString display();
    virtual double get_price();
    virtual ~Doritos();
};

#endif // DORITOS_H

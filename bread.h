#ifndef BREAD_H
#define BREAD_H
#include "nontaxable.h"

class Bread : public Nontaxable
{
public:
    Bread();
    virtual QString display();
    virtual double get_price();
    virtual ~Bread();
};

#endif // BREAD_H

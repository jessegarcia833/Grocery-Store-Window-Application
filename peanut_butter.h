#ifndef PEANUT_BUTTER_H
#define PEANUT_BUTTER_H
#include "nontaxable.h"

class Peanut_Butter : public Nontaxable
{
public:
    Peanut_Butter();
    virtual QString display();
    virtual double get_price();
    virtual ~Peanut_Butter();
};

#endif // PEANUT_BUTTER_H

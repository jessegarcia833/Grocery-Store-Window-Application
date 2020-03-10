#ifndef PEPSI_BOTTLE_H
#define PEPSI_BOTTLE_H
#include "taxable.h"

class Pepsi_Bottle : public Taxable
{
public:
    Pepsi_Bottle();
    virtual QString display();
    virtual double get_price();
    virtual ~Pepsi_Bottle();
};

#endif // PEPSI_BOTTLE_H

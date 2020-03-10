#ifndef COORS_EIGHT_PACK_H
#define COORS_EIGHT_PACK_H
#include "taxable.h"

class Coors_Eight_Pack : public Taxable
{
public:
    Coors_Eight_Pack();
    virtual QString display();
    virtual double get_price();
    virtual ~Coors_Eight_Pack();
};

#endif // COORS_EIGHT_PACK_H

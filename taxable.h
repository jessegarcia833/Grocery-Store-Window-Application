#ifndef TAXABLE_H
#define TAXABLE_H
#include "grocery_item.h"

class Taxable : public Grocery_Item
{
protected:
    QString displayInfo;
    QString name;
    double tax;
public:
    Taxable();
    Taxable(double price);
    virtual double get_price();
    virtual QString display();
    virtual ~Taxable();
};

#endif // TAXABLE_H

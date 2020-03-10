#ifndef NONTAXABLE_H
#define NONTAXABLE_H
#include "grocery_item.h"

class Nontaxable : public Grocery_Item
{
protected:
    QString displayInfo;
    QString name;
    double price;
public:
    Nontaxable();
    virtual QString display();
    virtual double get_price();
    virtual ~Nontaxable();
};

#endif // NONTAXABLE_H

#include "taxable.h"

Taxable::Taxable()
{
    name = "";
    price = 0.0;
    tax = .65;
}

Taxable::Taxable(double price)
{
    this->price = price;
}

double Taxable::get_price()
{
    return price * tax;
}

QString Taxable::display()
{
    return displayInfo;
}

Taxable::~Taxable()
{
}

#include "nontaxable.h"

Nontaxable::Nontaxable()
{
    name = "";
    price = 0.0;
}

QString Nontaxable::display()
{
    return displayInfo;
}

double Nontaxable::get_price()
{
    return price;
}

Nontaxable::~Nontaxable()
{

}

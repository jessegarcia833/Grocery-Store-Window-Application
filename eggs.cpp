#include "eggs.h"

Eggs::Eggs()
{
    name = "Eggs";
    price = 1.99;
}

QString Eggs::display()
{
    displayInfo = name + "\t\t" + QString::number(price);
    return displayInfo;
}

double Eggs::get_price()
{
    return price;
}

Eggs::~Eggs()
{

}

#include "bread.h"

Bread::Bread()
{
    name = "Bread";
    price = 2.99;
}

QString Bread::display()
{
    displayInfo = name + "\t\t" + QString::number(price);
    return displayInfo;
}

double Bread::get_price()
{
    return price;
}

Bread::~Bread()
{

}

#include "doritos.h"

Doritos::Doritos()
{
    name = "Doritos";
    price = 2.99;
}

QString Doritos::display()
{
    displayInfo = name + "\t\t" + QString::number(price);
    return displayInfo;
}

double Doritos::get_price()
{
    return price;
}

Doritos::~Doritos()
{
}

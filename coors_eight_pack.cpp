#include "coors_eight_pack.h"

Coors_Eight_Pack::Coors_Eight_Pack()
{
    name = "Coors";
    price = 9.99;
}

QString Coors_Eight_Pack::display()
{
    displayInfo = name + "\t\t" + QString::number(price);
    return displayInfo;
}

double Coors_Eight_Pack::get_price()
{
    double temp = 0;
    temp = price * tax;

    return price + temp;
}


Coors_Eight_Pack::~Coors_Eight_Pack()
{
}

#include "pepsi_bottle.h"

Pepsi_Bottle::Pepsi_Bottle()
{
    name = "Pepsi";
    price = .99;
}

QString Pepsi_Bottle::display()
{
    displayInfo = name + "\t\t" + QString::number(price);
    return displayInfo;
}

double Pepsi_Bottle::get_price()
{
    double temp = 0;
    temp = price * tax;

    return price + temp;
}

Pepsi_Bottle::~Pepsi_Bottle()
{

}

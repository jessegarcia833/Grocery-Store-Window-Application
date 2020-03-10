#include "peanut_butter.h"

Peanut_Butter::Peanut_Butter()
{
    name = "PButter";
    price = 3.99;
}

QString Peanut_Butter::display()
{
    displayInfo = name + "\t\t" + QString::number(price);
    return displayInfo;
}

double Peanut_Butter::get_price()
{
    return price;
}

Peanut_Butter::~Peanut_Butter()
{

}

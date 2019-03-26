#ifndef AODI_H_INCLUDED
#define AODI_H_INCLUDED

#include "../include/Car.h"

class Aodi:public Car
{
public:
    Aodi(){
        i_Number = 1;
        str_Name = "奥迪A4";
        i_Rent_money = 500;
        i_Cap_person = 4;
    }
    int i_Cap_person;
};

#endif // AODI_H_INCLUDED

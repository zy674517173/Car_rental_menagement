#ifndef MAZIDA_H_INCLUDED
#define MAZIDA_H_INCLUDED

#include "../include/Car.h"

class Mazida:public Car
{
public:
    Mazida(){
        i_Number = 2;
        str_Name = "马自达6";
        i_Rent_money = 400;
        i_Cap_person = 4;
    }
    int i_Cap_person;
};

#endif // MAZIDA_H_INCLUDED

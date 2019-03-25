#ifndef MAZIDA_H_INCLUDED
#define MAZIDA_H_INCLUDED

#include "../include/Car.h"

class Mazida::public Car
{
    Mazida(){
        i_Number = 2;
        str_Name = "马自达6";
        i_Rent_money = 400;
        i_Cap_person = 4
    }
public:
    int getCapperson(){
        return i_Cap_person;
    }
private:
    int i_Cap_person;
};

#endif // MAZIDA_H_INCLUDED

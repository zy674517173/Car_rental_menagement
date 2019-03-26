#ifndef JINLONG_H_INCLUDED
#define JINLONG_H_INCLUDED

#include "../include/Car.h"

class Jinlong:public Car
{
public:
    Jinlong(){
        i_Number = 4;
        str_Name = "金龙";
        i_Rent_money = 800;
        i_Cap_person = 20;
    }
    int i_Cap_person;
};


#endif // JINLONG_H_INCLUDED

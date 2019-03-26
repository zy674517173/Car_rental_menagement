#ifndef SONGHUAJIANG_H_INCLUDED
#define SONGHUAJIANG_H_INCLUDED

#include "../include/Car.h"

class Songhuajiang:public Car
{
public:
    Songhuajiang(){
        i_Number = 5;
        str_Name = "松花江";
        i_Rent_money = 400;
        i_Cap_thing = 4;
    }
    int i_Cap_thing;
};


#endif // SONGHUAJIANG_H_INCLUDED

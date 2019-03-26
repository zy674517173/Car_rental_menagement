#ifndef YIWEIKE_H_INCLUDED
#define YIWEIKE_H_INCLUDED

#include "../include/Car.h"

class Yiweike:public Car
{
public:
    Yiweike(){
        i_Number = 6;
        str_Name = "依维柯";
        i_Rent_money = 1000;
        i_Cap_thing = 10;
    }

    int i_Cap_thing;
};

#endif // YIWEIKE_H_INCLUDED

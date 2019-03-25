#ifndef YIWEIKE_H_INCLUDED
#define YIWEIKE_H_INCLUDED

#include "../include/Car.h"

class Yiweike::public Car
{
    Yiweike(){
        i_Number = 6;
        str_Name = "依维柯";
        i_Rent_money = 1000;
        i_Cap_thing = 10;
    }
public:
    int getCapthing(){
        return i_Cap_thing;
    }
private:
    int i_Cap_thing;
};

#endif // YIWEIKE_H_INCLUDED

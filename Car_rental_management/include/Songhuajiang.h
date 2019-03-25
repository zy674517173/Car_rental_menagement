#ifndef SONGHUAJIANG_H_INCLUDED
#define SONGHUAJIANG_H_INCLUDED

#include "../include/Car.h"

class Songhuajiang::public Car
{
    Songhuajiang(){
        i_Number = 5;
        str_Name = "松花江";
        i_Rent_money = 400;
        i_Cap_thing = 4;
    }
public:
    int getCapthing(){
        return i_Cap_thing;
    }
private:
    int i_Cap_thing;
};


#endif // SONGHUAJIANG_H_INCLUDED

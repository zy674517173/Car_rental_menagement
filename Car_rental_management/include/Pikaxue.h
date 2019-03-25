#ifndef PIKAXUE_H_INCLUDED
#define PIKAXUE_H_INCLUDED

#include "../include/Car.h"

class Pikaxue::public Car
{
    Pikaxue(){
        i_Number = 3;
        str_Name = "皮卡雪";
        i_Rent_money = 450;
        i_Cap_person = 4;
        i_Cap_thing = 2;
    }
public:
    int getCapperson(){
        return i_Cap_person;
    }
    int getCapperson(){
        return i_Cap_thing;
    }
private:
    int i_Cap_person;
    int i_Cap_thing;
};

#endif // PIKAXUE_H_INCLUDED

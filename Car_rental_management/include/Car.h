#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <string>
using namespace std;

class Car
{
public:
    int getNumber(){
        return i_Number;
    }
    string getName(){
        return str_Name;
    }
    int getRentmoney(){
        return i_Rent_money;
    }

private:
    int i_Number;
    string str_Name;
    int i_Rent_money;
};

#endif // PERSON_H_INCLUDED

#include <iostream>
#include "../include/Car.h"
#include "../include/Aodi.h"
#include "../include/Pikaxue.h"
#include "../include/Songhuajiang.h"
#include "../include/Jinlong.h"
#include "../include/Mazida.h"
#include "../include/Yiweike.h"

using namespace std;

int main()
{
    cout << "欢迎来到渝哥租车系统" << endl;
    cout << "是否租车: 是的，我要租（1） 不，我点错啦（0）" << endl;

    int i_ifRentCar;
    cin >> i_ifRentCar;

    if(i_ifRentCar == 0){
        cout << "欢迎下次使用呀！" << endl;
        return 0;
    }

    Aodi *pa = new Aodi();
    Mazida *pm = new Mazida();
    Pikaxue *pp = new Pikaxue();
    Jinlong *pj = new Jinlong();
    Songhuajiang *ps = new Songhuajiang();
    Yiweike *py = new Yiweike();

    cout << "序号     汽车型号    租金          容量" << endl;
    cout << pa->i_Number<<"     "<<pa->str_Name<<"     "<<pa->i_Rent_money<<"    载人："<<pa->i_Cap_person << endl;
    cout << pm->i_Number<<"     "<<pm->str_Name<<"     "<<pm->i_Rent_money<<"    载人："<<pa->i_Cap_person << endl;
    cout << pp->i_Number<<"     "<<pp->str_Name<<"     "<<pp->i_Rent_money<<"    载人："<<pp->i_Cap_person << "载货" << pp->i_Cap_thing << endl;
    cout << pj->i_Number<<"     "<<pj->str_Name<<"     "<<pj->i_Rent_money<<"    载人："<<pj->i_Cap_person << endl;
    cout << ps->i_Number<<"     "<<ps->str_Name<<"     "<<ps->i_Rent_money<<"    载货："<<ps->i_Cap_thing << endl;
    cout << py->i_Number<<"     "<<py->str_Name<<"     "<<py->i_Rent_money<<"    载货："<<py->i_Cap_thing << endl;

    int i_Rent_number;
    cout << "请输入要租车的数量（最大为6）：" << endl;
    cin >> i_Rent_number;

    cout << "请依次输入要租车的序号" << endl;
    int Rent_number[i_Rent_number];
    for(int i=0;i<i_Rent_number;i++){
        cin >> Rent_number[i];
    }

    cout << "请输入要租车的天数：" << endl;
    int i_Rent_days;
    cin >> i_Rent_days;

    int Cap_people[4][2]={{0,0},{1,0},{2,0},{3,0}};
    int Cap_thing[3][2]={{0,0},{1,0},{2,0}};

    int i_Allrentmoney = 0;
    for(int i=0;i<i_Rent_number;i++){
        switch(Rent_number[i])
        {
        case 1:
                i_Allrentmoney += pa->i_Rent_money;
                Cap_people[0][1] = 1;
                break;
        case 2:
                i_Allrentmoney += pm->i_Rent_money;
                Cap_people[1][1] = 1;
                break;
        case 3:
                i_Allrentmoney += pp->i_Rent_money;
                Cap_people[2][1] = 1;
                break;
        case 4:
                i_Allrentmoney += pj->i_Rent_money;
                Cap_people[3][1] = 1;
                break;
        case 5:
                i_Allrentmoney += ps->i_Rent_money;
                Cap_thing[0][1] = 1;
                break;
        case 6:
                i_Allrentmoney += py->i_Rent_money;
                Cap_thing[1][1] = 1;
                break;
        }
    }

    cout << "可载人的车：" << endl;
    for(int i=0;i<4;i++){
        if(Cap_people[i][1] == 1){
            cout << pa->str_Name;
        }
        if(Cap_people[i][1] == 1){
            cout << pm->str_Name;
        }
        if(Cap_people[i][1] == 1){
            cout << pp->str_Name;
        }
        if(Cap_people[i][1] == 1){
            cout << pj->str_Name;
        }
    }

    cout << endl;

    cout << "可载货的车" << endl;
    for(int i=0;i<3;i++){
        if(Cap_thing[i][1] == 1){
            cout << pa->str_Name;
        }
        if(Cap_thing[i][1] == 1){
            cout << pm->str_Name;
        }
        if(Cap_thing[i][1] == 1){
            cout << pp->str_Name;
        }
    }

    cout << "总价格：";
    cout << i_Allrentmoney * i_Rent_days << endl;




    delete pa, pm, pp, pj, ps, py;
    pa = NULL;
    pm = NULL;
    pp = NULL;
    pj = NULL;
    ps = NULL;
    py = NULL;
    return 0;
}

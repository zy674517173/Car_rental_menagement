#include <iostream>

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

    int i_Rent_number;
    cout << "请输入要租车的数量（最大为6）：" << endl;
    cin >> i_Rent_number;

    cout << "请依次输入要租车的序号" << endl;
    int Rent_number[i_Rent_number];
    for(int i=0;i<i_Rent_number;i++){
        cin >> Rent_number[i];
    }




    delete pa, pm, pp, pj, ps, py;
    pa = NULL;
    pm = NULL;
    pp = NULL;
    pj = NULL;
    ps = NULL;
    py = NULL;
    return 0;
}

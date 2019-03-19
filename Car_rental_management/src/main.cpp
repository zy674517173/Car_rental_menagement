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


    return 0;
}

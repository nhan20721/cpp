#include <iostream>
#define PI 3.14
using namespace  std;
int main (){
    float a,b,c,d;
    cout <<"Canh cua hinh vuong la:"; cin >> a;
    cout <<"Dien tich hinh vuong la: " << a*a << endl;
    cout <<"Duong kinh cua hinh tron la:"; cin >> b;
    cout <<"Dien tich hinh tron la: " << PI*b*b << endl;
    cout <<"Duong cao cua hinh tam giac la:"; cin >> c;
    cout <<"Canh day cua hinh tam giac la:"; cin >> d;
    cout <<"Dien tich cua hinh tam giac la: " << 0.5*c*d << endl;
    return 0;
}
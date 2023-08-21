#include <iostream>
using namespace  std;
int main(){
    int a,b;
    cout <<"Nhap a:"; cin >> a;
    cout <<"Nhap b:"; cin >> b;
    int c = a;
    a = b;
    b = c;
    cout << "a la: " << a << endl;
    cout << "b la: " <<b <<endl;
    return 0;
}

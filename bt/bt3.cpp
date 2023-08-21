#include <iostream>
using namespace  std;
int main (){
    double a, n;
    cout <<"Nhap so tien ban muon gui tiet kiem:"; cin >> a;
    cout <<"Nhap so nam ban muon gui tiet kiem:"; cin >> n;
    cout <<"So tien ma ban nhan duoc sau "<< n <<" nam tinh theo lai don la: " << a*(1+0.15*n) << endl;
    return 0;
}
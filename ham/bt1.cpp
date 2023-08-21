#include <iostream>
using namespace std;
int tong (int num1, int num2){
    int s;
    s = num1 +num2;
    return s;
}
int main(){
    int a, b, c;
    cout <<"Nhap so nguyen 1: ";
    cin >> b;
    cout <<"Nhap so nguyen 2: ";
    cin >> c;
    a = tong(b,c);
    cout <<"Tong cua 2 so nguyen " << b <<" va "<< c << " la " << a;
    return 1;
}
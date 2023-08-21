#include <iostream>
using namespace std;
struct TOADO{
    float hoanhdo;
    float tungdo;
};
int main (){
    TOADO td;
    cout << "Nhap hoanh do: ";
    cin >> td.hoanhdo;
    cout << "Nhap tung do: ";
    cin >> td.tungdo;
    cout <<"Toa do cua diem la: " << td.hoanhdo << ";" << td.tungdo;
    return 0;
}
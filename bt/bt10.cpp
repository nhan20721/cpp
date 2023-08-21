#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Nhap thang: "; cin >> a;
    switch (a){
        case 1:
            cout << "Thang " << a << " co 31 ngay\n";
            break;
        case 3:
            cout << "Thang " << a << " co 31 ngay\n";
            break;
        case 5:
            cout << "Thang " << a << " co 31 ngay\n";;
            break;
        case 7:
            cout << "Thang " << a << " co 31 ngay\n";
            break;
        case 8:
            cout << "Thang " << a << " co 31 ngay\n";
            break;
        case 10:
            cout << "Thang " << a << " co 31 ngay\n";
            break;
        case 12:
            cout << "Thang" << a << "co 31 ngay\n";
            break;
        case 4:
            cout << "Thang " << a << " co 30 ngay\n";
            break;
        case 6:
            cout << "Thang" << a << "co 30 ngay\n";
            break;
        case 9:
            cout << "Thang " << a << " co 30 ngay\n";
            break;
        case 11:
            cout << "Thang " << a << " co 30 ngay\n";
            break;
        case 2:
            cout << "Thang " << a << " co 28 hoac 29 ngay\n";
            break;
        default:
            cout << "Khong co thang " << a << endl;
            break;
    }
    return 0;   
}
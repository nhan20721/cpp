#include <iostream>
using namespace std;
int main(){
    double dso, hhong;
    cout << "Tong doang so cua cong ty la: "; cin >> dso;
    if (dso <= 100000000 ){
        hhong = dso*0.05;
        cout << "So tien hoa hong ma ban nhan duoc la: " << hhong << endl;
    }else if (dso <= 300000000){
        hhong = dso*0.1;
        cout << "So tien hoa hong ma ban nhan duoc la: " << hhong << endl;
    }else {
        hhong = dso*0.2;
        cout << "So tien hoa hong ma ban nhan duoc la: " << hhong << endl;
    }
    return 0;
}
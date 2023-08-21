#include <iostream>
using namespace std;
int main(){
    float a, b, c, dtb;
    cout << "Nhap diem bai kiem tra:  "; cin >> a;
    cout << "Nhap diem thi giua ky:  "; cin >> b;
    cout << "Nhap diem thi cuoi ky:  "; cin >> c;
    dtb = (a+b+c)/3;
    cout << "Diem trung binh cua hoc sinh la: " << dtb << endl;
    if(dtb >= 9.0){
        cout << "Hoc sinh dat hang A\n";
    }else if (dtb >=7.0){
        cout << "Hoc sinh dat hang B\n";
    }else if (dtb >=5.0){
        cout << "Hoc sinh dat hang C\n";
    }else {
        cout << "Hoc sinh dat hang F\n";
    }
    return 0;
}
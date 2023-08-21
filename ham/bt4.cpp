#include <iostream>
#define PI 3.14
using namespace  std;
float htron (float r){
    float s;
    s = PI*r*r;
    return s;
}
float hvuong (float a){
    float s;
    s = a*a;
    return s;
}
float hcn (float a, float b){
    float s;
    s = a*b;
    return s;
}
float htg (float a, float b){
    float s;
    s = 0.5*a*b;
    return s;
}
int main (){
    int a;
    float r,s1,b,s2,c,d,s3,e,f,s4;
    cout << "1: Tinh dien tich hinh tron \n";
    cout << "2: Tinh dien tich hinh vuong \n";
    cout << "3: Tinh dien tich hinh chu nhat \n";
    cout << "4: Tinh dien tich hinh tam giac \n";
    cout << "Lua chon hinh ban muon tinh dien tich: ";
    cin >> a;
    switch (a){
        case 1:
            cout << "Nhap ban kinh duong tron: ";
            cin >> r;
            s1 = htron(r);
            cout <<"Dien tich hinh tron la: " << s1;
            break;
        case 2:
            cout << "Nhap gia tri canh cua hinh vuong: ";
            cin >> b;
            s2 = hvuong(b);
            cout <<"Dien tich hinh vuong la: " << s2;
            break;
        case 3:
            cout << "Nhap canh dai cua hinh chu nhat: ";
            cin >> c;
            cout << "Nhap canh ngan cua hinh chu nhat: ";
            cin >> d;
            s3 = hcn (c,d);
            cout <<"Dien tich hinh chu nhat la: " << s3;
            break;
        case 4:
            cout << "Nhap canh day cua hinh tam giac: ";
            cin >> e;
            cout << "Nhap duong cao cua hinh tam giac: ";
            cin >> f;
            s4 = htg (e,f);
            cout <<"Dien tich hinh tam giac la: " << s4;
            break;
        default:
            cout << "Khong co truong hop " << a << endl;
            break;
    }
    return 0;
}

#include <iostream>
#include <string.h>
using namespace std;

struct hocsinh
{
    char hoten[20];
    int ngaysinh;
    char tenlop[10];
};

void nhapten(hocsinh hs){
    cout <<"Nhap ten hoc sinh: ";fflush(stdin);
    cin >> hs.hoten;
}
int nhapngaysinh(hocsinh hs){
    cout << "Nhap ngay sinh cua hoc sinh: ";fflush(stdin);
    cin >> hs.ngaysinh;
    return hs.ngaysinh ;
}

void nhaptenlop(hocsinh hs){
    cout <<"Nhap ten lop cua hoc sinh: ";fflush(stdin);
    cin >> hs.tenlop;
}

int main (){
    hocsinh hs1, hs2, hs3;
    cout << "Nhap hoc sinh 1\n";
    nhapten(hs1);
    nhapngaysinh(hs1);
    nhaptenlop(hs1);

    cout << "Nhap hoc sinh 2\n";
    nhapten(hs2);
    nhapngaysinh(hs2);
    nhaptenlop(hs2);

    cout << "Nhap hoc sinh 3\n";
    nhapten(hs3);
    nhapngaysinh(hs3);
    nhaptenlop(hs3);

    cout << "\n-------------------Thong tin hoc sinh-----------\n";
    cout << "Ho ten"<<"\t\t\t"<<"Ngay sinh"<<"\t\t\t"<<"Lop"<< endl;
    cout << hs1.hoten << "\t\t\t" << hs1.ngaysinh <<"\t\t\t"<< hs1.tenlop <<  endl;
    cout << hs2.hoten << "\t\t\t" << hs2.ngaysinh <<"\t\t\t"<< hs2.tenlop <<  endl;
    cout << hs3.hoten << "\t\t\t" << hs3.ngaysinh <<"\t\t\t"<< hs3.tenlop <<  endl;
    
    return 0;
}

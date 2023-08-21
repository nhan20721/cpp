#include<iostream>
using namespace std;

enum GIOITINH {
    NAM,
    NU,
    KHAC
};
int main(){
    GIOITINH t;
    int gt;
    do {
        cout<<"Nhap vao gioi tinh (0:NAM, 1:NU, 2:KHAC): ";
        cin>>gt;
    } while (gt < 0 || gt > 2);
    
    t = static_cast<GIOITINH>(gt);
    return 0;
}
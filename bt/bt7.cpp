#include <iostream>
using namespace std;
int main(){
    int a;
    cout <<"Nhap 1 so nguyen bat ky: "; cin >> a;
    if(a < 100){
        cout << a << " la 1 so be hon 100\n";
    }else{
        if (a == 100){
            cout << a <<" la 1 so bang 100\n";
        }else{
            cout << a << " la 1 so lon hon 100\n";
        } 
    }
    return 0;
}

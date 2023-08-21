#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Nhap vao 1 so:"; cin >> a;
    if(a % 2 == 0){
        cout << a << " la 1 so chan\n";
    }else{
        cout << a <<" la 1 so le\n";
    }
    return 0;
}
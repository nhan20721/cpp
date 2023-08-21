#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int n;
    int tong = 0;
    cout << "So phan tu cua mang la: ";
    cin >> n;
    int array [n];
    for (int i = 0; i < n; i++){
        cout << "Nhap phan tu thu " << i <<" cua mang: ";
        cin >> array[i];
    }
    for (int i = 0; i < n; i++) {
        cout<< "Phan tu array["<< i <<"]: "<< array[i] <<endl;
    }
    for (int i = 0; i < n; i++){
        if(array[i] % 2 != 0){
            tong += array[i];
            cout << "Cac gia tri le trong mang la: " << array[i] << endl;
        }
    }
        cout << "Tong cac gia tri le trong mang la: " << tong;
    return 0;
}
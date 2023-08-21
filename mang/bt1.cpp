#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int array [10];
    int tong = 0;
    for (int i = 0; i < 10; i++){
        cout << "Nhap phan tu thu " << i <<" cua mang: ";
        cin >> array[i];
    }
    for (int i = 0; i < 10; i++) {
        cout<< "Phan tu array["<< i <<"]: "<< array[i] <<endl;
    }
    for (int i = 0; i < 10; i++){
        if(array[i] % 2 == 0){
            tong += array[i];
            cout << "Cac gia tri chan trong mang la: " << array[i] << endl;
        }
    }
        cout << "Tong cac gia tri chan trong mang la: " << tong;
    return 0;
}
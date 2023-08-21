#include <iostream>
using namespace std;
int main(){
    int a[5];
    for (int i = 0; i < 5; i++){
        cout << "Nhap phan tu thu " << i <<" cua mang: ";
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++) {
        cout<< "Phan tu a["<< i <<"]: "<< a[i] <<endl;
    }
    for (int i = 0; i < 5; i++) {
        cout << "Phan tu thu " << i << " cua mang la: " << a[i] << endl;
    }
    return 0;
}
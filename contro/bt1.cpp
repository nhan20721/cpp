#include <iostream>
using namespace std;
int main(){
    int*a;
    int n;
    cout << "Nhap so luong du lieu: ";
    cin>>n;
    a = new int[n];
    for (int i = 0; i < n; i++){
        cout << "Nhap phan tu thu " << i <<" cua mang: ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout<< "Phan tu a["<< i <<"]: "<< a[i] <<endl;
    }
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    cout<<endl;
    cout<<"Gia tri lon nhat: "<< max <<endl;
}
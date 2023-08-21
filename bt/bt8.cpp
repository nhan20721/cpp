#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Nhap so nguyen a: "; cin >> a;
    cout << "Nhap so nguyen b: "; cin >> b;
    cout << "Nhap so nguyen c: "; cin >> c;
    if(a < b){
        if (b < c){
            cout << c <<" la so lon nhat\n";
        }else{
            cout << b <<" la so lon nhat\n";
        }
    }else{
        cout << a <<" la so lon nhat"; 
    }
    return 0;
}
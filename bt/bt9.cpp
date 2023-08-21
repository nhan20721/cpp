#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Nhap so nguyen a: "; cin >> a;
    cout << "Nhap so nguyen b: "; cin >> b;
    cout << "Nhap so nguyen c: "; cin >> c;
    if (a > b){
        if (b > c){
            cout << b << " la so o giua\n";
        }else if (a > c){
            cout << c << " la so o giua\n";
        }else{
            cout << a << " la so o giua\n";
        }
    }else if (a > c){
        cout << a << " la so o giua\n";
        }else if (b > c){
            cout << c << " la so o giua\n";
        }else{
            cout << b << " la so o giua\n";
        }
    return 0;
}
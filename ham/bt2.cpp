#include <iostream>
using namespace std;
int tich (int n){
    int s = 1;
    for (int i = 1; i <= n; i++){
        s = s*i;
    }
    return s;
}
int main (){
    int a, b;
    cout <<"Nhap so n: ";
    cin >> b;
    a = tich(b);
    cout << "Tich cua "<< b << " so tu nhien lien tiep tinh tu 1 la: " << a;
    return 0;
}
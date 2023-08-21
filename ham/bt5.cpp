#include <iostream>
using namespace std;
int main(){
    int S = 0;
    int n = 0;
    while(S < 10000){
        n++;
        S = S + n;
    }
    cout<<"So nho nhat de tong tu 1 den no lon hon 10000 la: "<< n << endl;
    return 0;
}
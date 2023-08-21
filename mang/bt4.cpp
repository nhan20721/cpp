#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
    int a[10];
    int n = 10;
    int tong = 0;
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 51 + 50;
    }

    for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
    for (int i =0; i < n; i++){
        if (a[i] % 10 == 4){
            tong = tong + a[i];
        }

    }
    cout << endl;
    cout << "Tong cac phan tu co hang don vi la 4: " << tong;
    return 0;
}
    
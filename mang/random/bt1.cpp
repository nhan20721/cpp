#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
    int a[100];
    int n = 100;
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        a[i] = rand() % 101;
    }

    for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }

    int max = a[0];
    int min = a[0];
    
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }
    cout<<endl;
    cout<<"Gia tri lon nhat: "<<max<<endl;
    cout<<"Gia tri nho nhat: "<<min<<endl;
    
    int maxCount = 0;
    int store = 0;
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            store = a[i];
        }
    }
    
    cout<<"Tan so lon nhat la: "<<store<<" voi "<<maxCount<<" lan"<<endl;
    
    return 1;
}
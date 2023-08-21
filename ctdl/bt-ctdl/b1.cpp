#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;

int findsecondmin (int a[], int n){
    int mina, minb;
	if (a[0] < a[1]){
		mina = a[0];
		minb = a[1];
	} else {
		mina = a[1];
		minb = a[0];
	}
	for(int i = 2; i < n; i++){
        if(a[i] <= mina){
            minb = mina;
            mina = a[i];
        }else if (a[i] < minb){
            minb = a[i];
        }
    }
    return minb;
}

int main(){
	int a[MAX];
    int n;
	do{
        cout << "Nhap so phan tu cua mang: ";
        cin >> n;
    }while(n < 1 || n > MAX);
    for (int i = 0; i < n; i++){
        cout << "Nhap phan tu thu " << i <<" cua mang: ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout<< "Phan tu a["<< i <<"]: "<< a[i] <<endl;
    }
    cout << "Phan tu nho thu 2 cua mang la: " << findsecondmin (a, n);
    return 0;
}

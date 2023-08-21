#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;

void InsertionSort(int array[], int n) {
	int t;
    for (int x = 0; x < n; x++){
        for(int y = 0; y < n-1; y++){
            if(array[y] > array[y+1]){
                t = array[y];
                array[y] = array[y+1];
                array[y+1] = t;
            }
        }
    }
}

void PrintArray(int array[], int n)  {  
    int i;  
    for (i = 0; i < n; i++)  
        cout << array[i] << " ";  
    cout << endl; 
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
    cout << "Thu tu tang dan cua mang la : " ;
	InsertionSort(a, n); 
	PrintArray (a,n);
    return 0;
}

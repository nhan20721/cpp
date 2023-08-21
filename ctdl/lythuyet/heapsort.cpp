#include <iostream>
using namespace std;

void heaptify(int a[], int n, int i){			
	int l = 2 * i + 1;							//Node trai
	int r = 2 * i + 2;							//Node phai
	int largest = i;							//Gan largest cho node root
	if (l < n && a[l] > a[largest]){			//So sanh voi node trai va cap nhat largest
		largest = l;
	}
	if (r < n && a[r] > a[largest]){			//So sanh voi node phai va cap nhat largest
		largest = r;
	}
	if (largest != i){							
		swap(a[i], a[largest]);					//Swapneu largest khac i
		heaptify(a, n, largest);				//De quy heaptify
	}
}


void heapsort(int a[], int n){
	for (int i = n / 2 - 1; i >= 0; i--){		//Xay dung maxheap bang cach dung heaptify voi cac node khong phai node la (n/2 -1)
		heaptify(a, n, i);
	}
	for (int i = n - 1; i >= 0; i--){			//Duyet tu chi so cuoi cung den chi so dau tien cua mang
		swap(a[0], a[i]);						//Swap node root voi node cuoi cung
		heaptify(a, i, 0);						//Tiep tuc goi heaptify (khong con xet node cuoi cung)
	}
}

int main(){
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	heapsort(a, n);
	cout <<"Mang sau khi duoc sap xep: ";
	for (int i = 0; i < n; i++){
		cout << a[i];
	}
	return 0;
}

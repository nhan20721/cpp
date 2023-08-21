#include <iostream>
using namespace std;

int Sum (int n){
	if (n < 10){
		return n;
	} else {
		return n % 10 + Sum (n/10);
	}
}

int main(){
	int a;
	cout << "Nhap so a bat ki: ";
	cin >> a;
	cout << "Tong ca chu so cua " << a << " la: " << Sum(a);
	return 0;
}

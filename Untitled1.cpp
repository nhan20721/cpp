#include <iostream>
using namespace std;
int main(){
	int a=2;
	int b=3;
	int *c=&a;
	int *d=&b;
	*c=5;
	*d=6;
	d=c;
	*c=5;
	*d=6;
	cout <<a<<endl;
	cout <<b<<endl;
	cout <<*c<<endl;
	cout <<*d<<endl;
	
	return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v(5, 0);
	v.push_back(10); // Chen them vao 1 phan tu o cuoi la 10
	v.clear();
	v.resize(10, 1);
	
	for (int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	return 0;
}

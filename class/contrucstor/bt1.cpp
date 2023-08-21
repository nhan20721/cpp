#include <iostream>
using namespace std;
class A{
    public:
        A(){
            cout <<"1"<<endl;
        }
        A(int c){
            cout <<c;
        }
        ~A(){
            cout << "3"<<endl;
        }
};

int main(){
    A a, b, c(3);
    return 0;
}
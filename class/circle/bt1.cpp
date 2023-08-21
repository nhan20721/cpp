#include <iostream>
#include "circle.h"
using namespace std;

int main(){
    circle a;
    a.set(15);
    cout <<"Chu vi cua hinh tron la: " << a.perimeter() << endl;
    cout <<"Dien tich cua hinh tron la: " << a.area() << endl;
    return 0;
}


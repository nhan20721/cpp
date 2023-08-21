#include <iostream>
using namespace std;
#define PI 3.14

class Circle
{
    private:
        float radius;
    public:
        Circle(float radius){
            this->radius=radius;
        }
        float area(){
            return PI*this->radius*this->radius;
        }
        float perimeter(){
            return 2*PI*this->radius;
        }
};

int main(){
    float r;
    cout <<"Nhap ban kinh hinh tron: ";
    cin >> r;
    Circle a(r);
    cout <<"Dien tich hinh tron la: " << a.area() <<endl;
    cout <<"Chu vi hinh tron la: " << a.perimeter() <<endl;
    return 0;
}
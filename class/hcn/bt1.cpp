#include <iostream>
using namespace std;

class Rectangle
{
    private:
        float length;
        float width;
    public:
        Rectangle(float width, float length){
            this->width=width;
            this->length=length;
        }
        float area(){
            return this-> width*this->length;}
        float perimeter(){
            return (this->width + this->length) * 2;
        }
        ~Rectangle(){}
};

int main(){
    float c,b;
    cout <<"Nhap chieu dai hinh chu nhat: ";
    cin >> c;
    cout <<"Nhap chieu rong hinh chu nhat: ";
    cin >> b;
    Rectangle a(c,b);
    cout <<"Dien tich hinh chu nhat la: " << a.area() <<endl;
    cout <<"Chu vi hinh chu nhat la: " << a.perimeter() <<endl;
    return 0;
}

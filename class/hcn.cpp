#include <iostream>
using namespace std;

class Rectangle
{
    private:
        float length;
        float width;
    public:
        void set(float l, float w);
        float area();
};

void Rectangle :: set(float length, float width){
    cout << "Nhap chieu dai hinh chu nhat: ";
    cin >> length;
    this->length = length;
    cout <<"Nhap chieu rong hinh chu nhat: ";
    cin >> width;
    this->width = width;
};

float Rectangle::area(){
    return this-> width*length;
}

int main(){
    Rectangle a;
    float l,w;
    a.set(l,w);
    cout <<"Dien tich cua hinh chu nhat la: " << a.area() << endl;
    return 0;
}


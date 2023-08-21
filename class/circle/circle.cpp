#include "circle.h"

void circle:: set(float r){
    radius = r;
};

float circle::area(){
    return 3.14*radius*radius;
}

float circle::perimeter(){
    return 2*3.14*radius;
}
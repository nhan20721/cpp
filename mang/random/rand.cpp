#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    srand(time(NULL));
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    return 0;
}
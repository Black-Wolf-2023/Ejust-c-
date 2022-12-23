#include "iostream"
using namespace std;

void clac(double x){
    cout << 2 * 3.14 * x << endl;
}

void clac(double x , double y){
    cout << x * y << endl;
}

void clac(double x , double y , double z ,double l){
    cout << (2*x*l + 2*y*l + 2*z*y) << endl;
}

int main(){
    clac(12);
    clac(12,23);
    clac(12,6,4,5);
    return 0;
}
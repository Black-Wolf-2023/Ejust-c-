#include "iostream"
#include "cmath"
using namespace std;


void point__distance(double x,double y , double s = 0, double z = 0){
    cout << sqrt(((y - z) * (y - z)) + ((x - s) * (x - s)));
}

int main(){
    point__distance(2,3);
}
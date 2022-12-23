#include "iostream"
#include "cmath"
using namespace std;


void point__distance(double x,double y , double &distance, double &slope,double s = 0, double z = 0){
    distance =  sqrt(((y - z) * (y - z)) + ((x - s) * (x - s)));
    slope = (x-s) / (y-z);
}

int main(){
    double distance = 0;
    double slope = 0;
    point__distance(2,3,distance,slope,7,9);
    cout << distance << endl << slope;
}
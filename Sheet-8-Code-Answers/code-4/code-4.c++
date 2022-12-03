#include "iostream"
using namespace std;


void calc(float starting,float ending,float step){
    float sum = 0;
    while(starting < ending){
        sum += starting * starting;
        starting += step;
    }
    cout << "Total Sumition is : " << sum << endl; 
}

int main(){
    calc(1,5,2);
    return 0;
}
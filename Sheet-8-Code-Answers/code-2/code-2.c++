#include "iostream"
using namespace std;


void clac(float diameter){
    cout << "Perimater Of Circle is : " << (diameter * 2) * 3.14 << endl;
    cout << "Area Of Circle is : " << (diameter * diameter) * 3.14 << endl;
}

int main(){
    clac(3);
    return 0;
}
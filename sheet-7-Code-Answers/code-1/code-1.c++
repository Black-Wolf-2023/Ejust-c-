#include <iostream> 
#include <cmath>
using namespace std;

void clac(double num__1,double num__2,int operator__type){

    switch (operator__type) {
    case 0:
        cout << num__1  << " - " << num__2 << " = " << num__1 - num__2 << endl;
        break;
    case 1:
        cout << num__1  << " + " << num__2 << " = " << num__1 + num__2 << endl;
        break;
    case 2:
        cout << num__1  << " * " << num__2 << " = " << num__1 * num__2 << endl;
        break;
    case 3:
        if(num__2 == 0) cout << "Logical Error\n"; return;
            cout << num__1  << " / " << num__2 << " = " << num__1 / num__2 << endl;
        break;
    default :
        cout << num__1  << " % " << num__2 << " = " << fmod(num__1,num__2) << endl;
    }
}

int main(){
    clac(0,0,3);
    return 0;
}
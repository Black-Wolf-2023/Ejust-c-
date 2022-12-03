#include "iostream"
#include "cmath"
using namespace std;


//-------Hint-------->

//===> cos(x) to get cosine for the angle x
//===> sin(x) to get sine value for the angle x
//===> ceil(x) to get the biggest round value for value of x
//===> floor(x) to get the smallest round value for value of x
//===> log10(x) to get log of x base on 10 
//===> exp(x) for e to power x
//===> sqrt(x) to get the square root of x


void calc(float starting,float ending){
    int counter = 0;
    while(starting <= ending){
        cout << "######################  " << counter << " ###########################\n";
        cout << "\n";
        cout << "Cosine of X      : " << cos(starting) << endl << "\n";
        cout << "Sine of X        : " << sin(starting) << endl << "\n";
        cout << "Ceil of X        : " << ceil(starting) << endl << "\n";
        cout << "Floor of X       : " << floor(starting) << endl << "\n";
        cout << "log10 of X       : " << log(starting) << endl << "\n";
        cout << "e power X        : " << exp(starting) << endl << "\n";
        cout << "square root of X : " << sqrt(starting) << endl << "\n";
        starting += 0.5;
        counter++;
    }
}


int main(){


    calc(3.5,7);

    return 0;
}
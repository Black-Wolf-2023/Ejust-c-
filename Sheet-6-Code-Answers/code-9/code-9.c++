#include "iostream"
using namespace std;

int main(){

    float n_1 = 0;
    float n_2 = 1;
    float Nth = 0 ;
    float counter = 0;
    float index;

    cout << "Please Enter Your index of Nth : \n";
    cin >>  index;

    while (counter < index)
    {
        Nth = n_2 + (2*n_1); // 5
        n_1 = n_2;
        n_2 = Nth;
        counter++;
    }
    cout << Nth << endl;
    
    return 0;
}
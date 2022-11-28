#include "iostream"
using namespace std;

long double fact(int n){
    int counter = 1;
    long double result = 1;
    while(counter <= n){
        result *= counter ;
        cout << "counter : " << counter << '\t' << "result : " << result << endl; 
        cout  << '\n';
        counter++;
    }

    return  result;
}

int main(){
    cout << fact(100) << "\n";
    return 0;
}
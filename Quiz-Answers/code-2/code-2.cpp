#include <iostream>
using namespace std;

int fib(int number){
    if(number == 0 || number == 1){
        return 1;
    }else{
        return fib(number - 1) + fib(number - 2);
    }
}

int main() {
    int counter = 0;
    while(counter < 30){
        cout << fib(counter) << ",";
        counter++;
    }
    return 0;
}
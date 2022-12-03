#include "iostream"
using namespace std;

//1 2 3 5 8 13
void fibonacci(){
    int sum = 0;
    int counter = 1;
    int end = 5;
    while(counter < end){
        sum = counter + sum; // 1 - 1 - 1
        counter = sum-1; // 0 - 0
    }

}

int main(){

   fibonacci();


    return 0;
}
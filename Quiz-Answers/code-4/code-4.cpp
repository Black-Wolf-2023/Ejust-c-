#include <iostream>
using namespace std;


void sum__elements(int &sum,int (&arr)[10]){
    for(int arr__element : arr){
        sum += arr__element;
    }
}


int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    sum__elements(sum,arr);
    
    cout << sum;
    return 0;
}
#include <iostream>
using namespace std;


int main() {
    int date[10] = {};
    int index = 0;
    
    for(int i = 2022; i > 2012;i--){
        date[index] = i;
        index++;
    }
     cout << "Date From 2013 to 2022 by year : ";
    for(int date__element : date){
       cout << date__element << " , ";
    }
    return 0;
}
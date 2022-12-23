#include "iostream"
using namespace std;


int power(int num , int pow){
    static int result = 1;
    if(pow == 0){
        return 0;
    }else{
        power(num,pow - 1);
        result *= num;
        return result;
    }
}


int main(){
    cout << power(3,2);
    return 0;
}
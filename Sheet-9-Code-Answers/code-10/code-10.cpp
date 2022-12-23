#include "iostream"
using namespace std;


int fact(int end__num){
    return end__num == 0 ?  1 :  end__num * fact(end__num - 1);
}

int main(){
   cout << fact(5);
   return 0;
}
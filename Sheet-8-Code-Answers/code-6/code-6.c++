#include "iostream"
using namespace std;

void fact(int num){
    int sum = 1;
    int start = 1;

    while(start <= num){
        sum *= start;
        cout  << "!" << start << " " <<  "= " << sum  << endl;
        start++;
    }

}

int main(){
    fact(5); 
    return 0;
}
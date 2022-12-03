#include "iostream"
using namespace std;


void prime(int starting,int ending){
       while(starting <= ending){
        if(!(starting % 2 == 0))
            cout << starting << endl;
        else
            cout << "Not Prime Num" << endl;
        

        starting++;
    }
}

int main(){

    prime(1,20);
    return 0;
}
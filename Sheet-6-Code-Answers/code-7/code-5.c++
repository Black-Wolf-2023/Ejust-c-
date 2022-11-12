#include "iostream"
using namespace std;

int main(){

int result = 1;
int counter = 1;
int num = 0;

cout << "Please Enter Your Number\n";
cin >> num ;

if(num < 0 ){
    cout << "Please Enter Vaild Value >= 0\n";
    return 0;
}

if(num != 0){
    while (counter < num){
    result += result * counter;
    counter++;
    }
    cout << result << endl;
}else{
    cout << 0 << endl;
}




return 0;
}
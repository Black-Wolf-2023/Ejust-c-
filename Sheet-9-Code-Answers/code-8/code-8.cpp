#include "iostream"
using namespace std;

template<typename T> T minimum(T x,T y){
    return x > y ? y : x;
}

int main(){
   cout <<  minimum<int>(3,6) << endl;
   cout <<  minimum<char>('a','e') << endl;
   cout <<  minimum<double>(32.45,32.54) << endl;
    return 0;
}
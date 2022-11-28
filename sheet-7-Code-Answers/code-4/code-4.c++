#include "iostream"
using namespace std;


long double chain(int n){

  int counter = 1;
  long double result = 0;
  while (counter <= n){
     result += counter * counter;
     cout << "\n";
     cout << counter << " X " << counter << " = " << result << endl;
     cout << "\n";
     counter++;
  }
  return result;
}

int main(){

    cout << chain(4) << endl;
    return 0;
}
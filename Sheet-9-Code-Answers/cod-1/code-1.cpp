#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


// Pseudo-Random  - Number - Generator (PRNG) In C++

void random__num(int start = 1 , int end = 10 , int sec__end = 5){

 srand(time(0));  // Initialize random number generator.

 cout<<"Random numbers generated between 1 and 10:"<<endl;

  for(int i=0;i<sec__end;i++)
      cout << (rand() % ( end - start + 1)) + start <<" ";  
      cout << "\n";
}

int main()
{  
  random__num(-2,2,10);
  return 0;
}

 

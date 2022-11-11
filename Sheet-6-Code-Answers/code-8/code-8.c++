#include <iostream>
using namespace std;

int main() {
  int decimal, binary = 0, remainder, product = 1;

  cout << "Please Enter Your Number \n";
  // with default input [15]
  cin >> decimal;

  while (decimal != 0) {
    remainder = decimal % 2; // [1] [1] [1] [1]
    binary = binary + (remainder * product); // [1] [11] [111] [1111] 
    decimal = decimal / 2; // [7] [3] [1] [0]
    product *= 10; // [10] [100] [1000]
  }
   
  cout << "The number in the binary form is: " << binary << endl ;
  return 0;
}
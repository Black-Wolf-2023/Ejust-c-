#include "iostream"
using namespace std;

int main(){

  int num = 0;

  cout << "Please Enter Your Num : \n";
  cin >> num;
  cout << num % 10 << " ";
  cout << (num / 10)  % 10 <<" " ;
  cout << (num / 100) % 10 << " ";
  cout << (num / 1000) % 10 << " ";
    
    return 0;
}
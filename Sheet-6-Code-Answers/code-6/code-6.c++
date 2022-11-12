#include "iostream"
using namespace std;

int main(){
 
  float flag = -99999, sum = 0,num = 0;
  int numbers[100] = {0};
  int length = 0;
  int i = 0;
  float standard__deviation = 0;


 cout << "Please Enter Your Numbers and -99999 to end\n";

  while(num != flag){
    cin >> num;
    if(num != flag){
        sum += num;
        numbers[length] = num;
        length++;
    }
  }
  

  while(i < length){
    standard__deviation += (numbers[i]  - (sum / length)) * (numbers[i]  - (sum / length));
    i++;
  }

  cout << standard__deviation << endl;
  return 0;
}
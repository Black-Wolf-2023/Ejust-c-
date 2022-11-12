#include "iostream"
using namespace std;

int main(){
 
  float flag = -99999, max = -99999, min = 999999 , sum = 0 , length = 0,num = 0;

 cout << "Please Enter Your Numbers and -99999 to end\n";
  while(num != flag){
    cin >> num;
    if(num != flag){
       
       if(num > max){
         max = num;
       }
      
      if(num < min){
        min = num;
      }

        sum += num;
        length++;
    }
  }

  cout << "maximum : " << max << endl << "minimum : " << min  << endl << "Sum : " << sum << endl  << "Average : " << sum / length << endl;

  return 0;
}
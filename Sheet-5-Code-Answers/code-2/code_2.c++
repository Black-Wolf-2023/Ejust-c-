#include "iostream"
using namespace std ;

int main(){
    int sum,product,max,min,count,num;

    product = 1;
    sum = 0;
    count = 0;
    max = 0;
    min = 99999999;

    float length = 3;

   while (count < length)
   {
    cout << "Please Enter 3 Positive Numbers : " << endl;
     cin >> num;
     if(max < num){
        max = num;
     }
     if(min > num){
        min = num;
     }
     sum += num;
     product *= num;
     count++;
   }
   
   cout << "Sum is " << sum << endl << "Average is " << sum / length << endl << "Product is " << product << endl << "Smallest is " << min << endl << "Largest is " << max << endl ;
    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


//======> Array For Make Our Operators
double arr[11] = {0};

//======> Counter to append new elements in array using cin function
int counter = 0;

//======> Lengther for our array after append elements 
int lengther = 0;

//======> this array for make our output more clear and make it more benfites
double output[4] = {999999,0,0,0};

//======> this for print our array after cin 
double getArr(int flag){
    if(flag == 0)  cout << "Your Arraw is : ";
    return arr[flag];
}
    
// this make our operators with number of operating and index of array 

// ====> Number Info
// 0 => to calc minimum
// 1 => to calc maximum
// 2 => to calc sum
// 3 => to calc average

// ====> Index Info

// [0] => for minimum value
// [1] => for maximum value
// [2] => for sum value
// [3] => for average value



void calc(int opt,int flag){

//==========> Using Switch to make Our Operating  
  switch(opt){
      case 0:
        if(output[0] > arr[flag]) output[0] = arr[flag];
      break;
      case 1 :
      if(output[1] < arr[flag]) output[1] = arr[flag];
      break;
      case 2 :
       output[2] = arr[flag] + output[2];
      break;
      case 3:
        output[3] = output[2] / 8;
      break;
      default :
        cout << "Erorr !" << endl;
  }
}

int main() {


    cout << "Please Enter 8 Numbers Element : \n";
    
    while(counter < 8){
        cin >> arr[counter];
        counter++;
        while(counter == 8 && lengther < 8){
            cout << getArr(lengther) << " , ";
            //====> function Call to Send lengther and Calc Minimum value
            calc(0,lengther);
            //====> function Call to Send lengther and Calc Maximum value
            calc(1,lengther);
            //====> function Call to Send lengther and Calc Sum value
            calc(2,lengther);
            //====> function Call to Send lengther and Calc Average value
            calc(3,lengther);
            lengther++;
        }
    }
    
    cout << endl;
    cout << "Your Minimum is : " << output[0] <<  endl;
    cout << "Your Maximum is : " << output[1] <<  endl;
    cout << "Your Sum is : " << output[2] <<  endl;
    cout << "Your Average is : " << output[3] <<  endl;
    return 0;
}
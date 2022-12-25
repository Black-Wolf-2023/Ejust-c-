#include <iostream>
using namespace std;

int main() {
    
    double arr[11] = {1,2,3};
    
    int counter = 0;
    int lengther = 0;
    cout << "Please Enter 8 Numbers Element : \n";
    
    while(counter < 8){
        cin >> arr[counter];
        counter++;
        while(counter == 8 && lengther < 8){
            if(lengther == 0)  cout << "Your Arraw is : " ;
            cout << arr[lengther] << " , ";
            lengther++;
        }
    }
    
    
    
    return 0;
}
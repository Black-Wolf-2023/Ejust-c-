#include "iostream"
using namespace std;

int main(){

   int b ,a = 0;
   cout << "Please Enter a , b values : \n";
   cin >> a;
   cin >> b;

    if(a < 0 ){
        cout << "\n";
        cout << "Please Enter Vaild A value More Than 0";
        cout << "\n";
        cout << " ";
        return 0;
    }
    if(b < 5.2){
        cout << "\n";
        cout << "Please Enter Vaild B value More Than 5.2";
        cout << "\n";
        cout << " ";
        return 0;
 
    }
    if(b > 10.5){
        cout << "\n";
        cout << "Please Enter Vaild B value Less Than 10.5";
        cout << "\n";
        cout << " ";
        return 0;
    }
    cout << "\n\n";
    cout << "X" << "\t \t " << "2" << "\t \t  " << "3"  << "\t \t " << "5";
    cout << "\n";
    cout << "\n";
    cout <<"F(x)" << "\t \t " << (a * 2 * 2 * 2) + (b * 2 * 2) <<  "\t \t  " << (a * 3 * 3 * 3) + (b * 3 * 3)<< "\t \t " << (a * 5 * 5 * 5) + (b * 5 * 5) << endl;
    cout << "\n\n";
    return 0;
}
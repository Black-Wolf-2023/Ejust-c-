#include "iostream"
using namespace std;

int main(){
        int x,y;

        cout  << "please enter x and y\n";
        cin >> x >> y;

        if ( y % 2){
        if ( x % 2) cout << "XxXxX" << endl;
        }else{
            cout << "OxOxO" << endl;
            cout << "YyYyY" << endl;
            cout << "-!-!-" << endl;
        }


    return 0;
}
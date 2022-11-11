#include "iostream"
using namespace std;

int main(){

    int count = 0;

    while (count <= 100)
    {
        if(count % 2 == 0){
            cout << count << "\n";
        }else{
            cout << "\n";
        }
        count++;
    }
    



    return 0;
}
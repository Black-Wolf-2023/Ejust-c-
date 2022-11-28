#include "iostream"
using namespace std;

int main(){

   int D = 0,M = 0 ,N = 0;
   cout << "Please Enter The D and N , M \n";
   cin >> D >> N >> M ;
    cout << "\n\n";


   if(D == 0){
      cout << "Please Enter Valid Value \n";
      return;
   }

   while(N < M){
     cout << N << "\n";
     N += D;
   }

   while(N >  M){
     cout << N << "\n";
     N -= D;
   }



    return 0;
}
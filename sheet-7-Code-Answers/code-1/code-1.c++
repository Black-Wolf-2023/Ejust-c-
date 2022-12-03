// #include <iostream>
// using namespace std;
// unsigned int factorial(unsigned int n)
// {
//   int fact=1;
//     if (n == 0 || n == 1)
//         return 1;
//     else 
//       for (int i=n;i>1;i--){
//         fact=fact*i;
//       }
//   return fact;
//   }
// int main() {
//   unsigned int num;
//   cout << "enter a number \n";
//   cin>>num;
//   cout << "Factorial of "<< num << " is " << factorial(num);
// }



#include <iostream>

 using namespace std;

void fibonacci(int n)

// Precondition: n >= 0
// Postcondition: the value of fib(n) has been printed to standard out
//preceded by an end of line.
{
    int n1 = 0 ;
    int n2 = 1 ;

    // Let n0 be the original value if n.

    // invariant n1 == fib( n0-n ) and n1 == fib(n0-n+1) 

    while(n!=0) {
        int sum = n1+n2 ;
        n1 = n2 ;
        n2 = sum ;
        n = n-1 ;
        cout<<endl<<n1;
     }
  
}

int main (){
    
    fibonacci(10);
}
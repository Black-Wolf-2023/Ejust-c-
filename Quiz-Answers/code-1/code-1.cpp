#include <iostream>
using namespace std;

template<typename T> T Max(T num__1,T num__2 , T num__3){
    if(num__1 > num__2 && num__3 < num__1){
        return num__1;
    }else if(num__2 > num__1 && num__3 < num__2){
        return num__2;
    }else{
        return num__3;
    }
}

int main() {
    cout << Max<int>(213,8,5);
    return 0;
}
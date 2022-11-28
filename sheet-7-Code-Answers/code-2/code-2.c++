#include "iostream"
using namespace std;

string calc(double grade){
    if(grade >= 90){
        return "Grade is : A \n";
    }else if(grade >= 70 && grade < 90){
        return "Grade is : B \n";
    }else if(grade >= 50 && grade < 70){
        return "Grade is : C \n";
    }else{
        return "Grade is : D \n";
    }
}

int main(){

    string sub__1,sub__2,sub__3,sub__4,sub__5;
    int counter = 1;
    double degree = 0;

    while(counter <= 5){
        cout << "Please Enter Grades " << counter << endl;
        cin >> degree;
        switch(counter){
            case 1 :
               sub__1 = calc(degree);
               counter++;
            break;
            case 2 :
               sub__2 = calc(degree);
               counter++;
            break;
            case 3 :
               sub__3 = calc(degree);
               counter++;
            break;
            case 4 :
               sub__4 = calc(degree);
               counter++;
            break;
            case 5 :
               sub__5 = calc(degree);
               counter++;
            break;
        } 
    }
    
    cout <<  "Subject 1 " <<  sub__1 << "Subject 2 " << sub__2 << "Subject 3 " << sub__3 <<  "Subject 4 " << sub__4 << "Subject 5 " <<  sub__5;

    return 0;
}
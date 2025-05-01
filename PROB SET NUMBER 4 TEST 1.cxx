#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a Number:";
    cin>>number;
    
    if (number > 0){
        cout<<"The number is positive."<<endl;
        if(number%2==0){
            cout<<"it is even."<<endl;
        }else{
            cout<<"it is odd."<<endl;
        }
    }else if(number<0){
        cout<<"The number is negative."<<endl;
        if(number%2==0){
            cout<<"it is even."<<endl;
        }else{
            cout<<"it is odd."<<endl;
        }
    }else{
        cout<<"The number is zero,which is even."<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int num1; int num2;
    cin>> num1;
    cin>> num2;
    int pw=1;
    int dec1=0; int dec2=0;
    int unit_digit;
    
    while(num1>0){
        unit_digit=num1%10;
        dec1+=pw*unit_digit;
        pw*=2;
        num1/=10;
    }
      pw=1;
    while(num2>0){
      
        unit_digit=num2%10;
        dec2+=pw*unit_digit;
        pw*=2;
        num2/=10;
    }
    if(dec1>dec2){
        cout<< "The dec1 is :"<< dec1;
    }
    else{
        cout<< "The dec2 is :"<< dec2;
    }
    return 0;
}
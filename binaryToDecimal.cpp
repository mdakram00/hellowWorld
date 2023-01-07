#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    int ans=0;
    int pw=1;
    int unitDigit;
    while(n>0){
        
        unitDigit=n%10;
        ans+=pw*unitDigit;
        n/=10;
        pw*=2;
    }
    cout<< ans;

    return 0;

}
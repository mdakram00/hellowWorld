#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cin>> n;
    while(n>0){
        int parity = n%2;
        if(parity==0){
            sum++;

        }      
        n/=2;  
    }     
     cout<< sum;
     return 0;
}
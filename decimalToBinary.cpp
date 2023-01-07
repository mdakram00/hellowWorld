#include<iostream>
using namespace std;

int main (){
    int ans=0;
    int sum=0;
    int parity;
    int n;
    int place=1;
    cin >> sum;
  /*  for(int i=1;i<=5;i++){
        sum+=i;
    }*/
    while(sum>0){
        
        parity=sum%2;
        ans+=place*parity;
        sum/=2;
        place*=10;
    }
    cout<< ans;
    return 0;
}
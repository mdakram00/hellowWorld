#include<iostream>
using namespace std;

int main(){
    
    for(int i=1;i<=500;i++){
        int sum=0;
        int t=i;
        while(t!=0){
            sum=sum+((t%10)*(t%10)*(t%10));
            t=t/10;
        }
        if(sum==i){
            cout<< i<< endl;
        }
      

    }
}

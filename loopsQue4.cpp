#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
      for(int j=1;j<=(n-i);j++){
         cout <<" ";
      }
       for(int j=i;j>=(1);j--){
          if(i==n || j==i){
             cout<<i;
          }          
          else {
            cout<<" ";
          } 

        }
        for(int j=2;j<=n;j++){
            if( j==i || i==n){
                cout<< i;
            }
            else {
                cout<<" ";
            }
        }

      cout<< endl;
   }
}

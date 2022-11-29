#include<iostream>
using namespace std;

int main(){
    int n; int i, j;
    cin>>n;
    for(i=1;i<=n;i++){
        for (j=(n-i);j<n;j++){
            cout << "*" ;
        }
       cout << endl; 
    }   
}
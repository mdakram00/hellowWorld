#include<iostream>
using namespace std;

int main(){
    int n, sum=0, i;
    cin>> n;
    for (i=1;i<=n;i++){
        if(i%2==0){
            sum-=i;
        }
        else{
            sum+=i;
        }
    }
    cout<< sum << endl;
    return 0;
}
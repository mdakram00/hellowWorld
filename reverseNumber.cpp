#include<iostream>
using namespace std;

int main(){
    int n, digit;
    int num=0;
    cin>> n;
    while(n>0){
        digit=(n%10);
        num=num*10 + digit;
        n=(n/10);
    }
    cout << num << endl;
    
    return 0;
}


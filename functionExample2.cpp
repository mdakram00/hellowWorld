#include<iostream>
using namespace std;

int odd_num(int num1, int num2){
    for(int i=num1; i<=num2; i++){
        if(i%2==1){
            cout << i<< endl;
        }
    }
}

int main(){
    int num1; int num2;
    cin>> num1>>num2;
    cout<< odd_num(num1, num2);

    return 0;

}
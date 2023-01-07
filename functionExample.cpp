#include<iostream>
using namespace std;

int voter(int age){
    if(age>=18){
        cout << "Eligible for voting";
    }
    else{
        cout << "Not Eligible for voting";
    }

}
int main(){
    cout<< "Enter the Age :";
    int age;
    cin>> age;
    cout<< voter(age);

}
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,5,7,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=size;    
   for(int i=0;i<5;i++){
    arr[i]=arr[size-1];
    cout<< arr[i]<< endl;
    size--;
   }
}
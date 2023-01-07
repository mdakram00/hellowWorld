#include<iostream>
using namespace std;


int main(){
    int array[]={2,3,4,5,7,78,4};
    int max=array[0], min=array[0];
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=1; i<size; i++){
       if(array[i]>max){
        max=array[i];
       }
       if(array[i]<min){
        min=array[i];
       }
    }
    cout<< max<< endl;
    cout << min << endl;ṇ 
}
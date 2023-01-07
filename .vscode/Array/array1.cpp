#include<iostream>
using namespace std;

int array[]={1,2,3,4,5};
int odd=0, even=0;
int size=sizeof(array)/sizeof(array[0]);
int main(){
    for(int i=0; i<=size; i++){
        if(i%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
        cout<< "No of Odds are "<< odd << endl;
        cout<< "No of Evens are "<< even-1<< endl;
        return 0;

}
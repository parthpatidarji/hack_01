#include<iostream>
using namespace std;
int main(){
    int arr[8]={5,2,9,4,7,6,1,0};
    for(int i=0;i<8;i+=2){
        if(i+1<=8){
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=0;i<8;i++){
        cout<<arr[i];

    }
    return  0;
}
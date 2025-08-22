#include<iostream>
#include<string>
using namespace std;



void missing_binary(int arr[], int size){
    int low=0;
    int high=size-1;
    while(low<=high){
        int mid= (low+high)/2;
        if(arr[mid]==mid+1){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<"the missing number was : "<<low+1<<endl;
}
int main(){
    int arr[10]={1,2,4,5,6,8,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    missing_binary(arr,n);
    return 0;
}


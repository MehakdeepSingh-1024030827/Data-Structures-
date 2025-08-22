#include<iostream>
#include<vector>
using namespace std;




// logic to remove duplicate elements and return new array with unique elements 



int del_dup(int arr[],int n, int index){
    int i;
    for(i=index;i<n;i++){
        arr[i]=arr[i+1];
    }
    return n-1;
}
void find_dup(int arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                n=del_dup(arr,n,j);
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[20]={1,2,3,4,5,4,3,2,1,5};
    int size=10;
    find_dup(arr,10);
    return 0;
}

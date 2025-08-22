#include<iostream>
#include<vector>
using namespace std;


// reverse the elements of an array

void reverse(int arr[],int n){

}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
}

void reverse(int arr[],int n){
    int t= n/2;
    for(int i=0;i<t;i++){
        int temp= arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9};
    int size=9;
    reverse(arr,size);
    return 0;
}


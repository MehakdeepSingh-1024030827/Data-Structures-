#include<iostream>
#include<vector>
using namespace std;

// display array;

int main(){
    int arr[5],j;
    for(j=0;j<5;j++){
        arr[j]=j+1;
    }
    for(j=0;j<5;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}
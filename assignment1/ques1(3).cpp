#include<iostream>
#include<vector>
using namespace std;

//insert an element at a given position 

void insert_ele(int arr[],int n,int ele, int pos){
    int i;
    for(i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    n++;
    arr[pos-1]=ele;
    cout<<"new array is : "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[10],n,i,element, position;
    n=5;
    for(i=0;i<n;i++){
        arr[i]=i+1;
    }
    cout<<"enter value to be inserted : ";
    cin>>element;
    cout<<"enter the position at which the element is to be inserted : ";
    cin>>position;

    insert_ele(arr,5,element,position);

    return 0;
}


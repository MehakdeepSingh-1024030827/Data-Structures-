#include<iostream>
using namespace std;

int inversion(int arr[],int size){
    int count =0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j] && j>i){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int ar[]={1,2,7,3,8,4,6,5,9,10,11,31,44};
    int n=sizeof(ar)/sizeof(ar[0]);
    cout<<"inversion elements are : "<<inversion(ar,n)<<endl;
    return 0;
}
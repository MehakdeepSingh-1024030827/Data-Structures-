#include<iostream>
#include<string>
using namespace std;


//ques 3 
//3) Given an array of n-1 distinct integers in the range of 1 to n, find the missing number
// in it in a Sorted Array
// (a) Linear time
// (b) Using binary search.


void missing_linear(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]!=i+1){
            cout<<"missing number was : "<<i+1<<endl;
            return;
        }
    }
    cout<<"missing was : "<<size<<endl;

}
int main(){
    int n=10;
    int arr[10]={1,2,3,4,5,6,7,8,9};
    missing_linear(arr,n);
    return 0;
}
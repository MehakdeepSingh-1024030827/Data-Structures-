#include<iostream>
#include<vector>
using namespace std;
//delete element (linear_search is also included)




int linear_search(int arr[],int n, int ele){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==ele){
            return i;
        }
    }
    return -1;
}
void remove_ele(int arr[],int n,int ele, int index){
    int i;
    for(i=index;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"array after deletion is : "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[10],n,i,element,idx;
    n=5;
    for(i=0;i<5;i++){
        arr[i]=i+1;
    }
    cout<<"enter element to be deleted : ";
    cin>>element;
    if(linear_search(arr,5,element)== -1){
        cout<<"element not found ! "<<endl;
    }
    else{
        idx=linear_search(arr,5,element);
        remove_ele(arr,5,element,idx);
    }
    return 0;
}


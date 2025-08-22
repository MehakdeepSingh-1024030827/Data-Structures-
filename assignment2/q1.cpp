#include<iostream>
#include<string>
using namespace std;


int linear_search(int arr[],int size,int ele){
    for(int i=0;i<size;i++){
        if(arr[i]==ele){
            return i;
        }
    }
    return -1;
}

int binary_search(int arr[],int size,int ele){
    int low=0;
    int high=size-1;

    while(low<=high){
        int mid= (low+high)/2;
        if(arr[mid]==ele){
            return mid;
        }
        else if(ele<arr[mid]){
            high=mid;
        }
        else if(ele>arr[mid]){
            low=mid;
        }
    }
    return -1;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int x;
    cout<<"enter element whose index is to be searched : ";
    cin>>x;
    if(binary_search(arr,10,x)==-1){
        cout<<"element not found !"<<endl;
    }
    else{
        cout<<"index of element "<<x<<" is : "<<binary_search(arr,10,x)<<endl;
    }
    return 0;
}
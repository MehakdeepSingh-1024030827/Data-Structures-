#include<iostream>
#include<string>
using namespace std;


// int linear_search(int arr[],int size,int ele){
//     for(int i=0;i<size;i++){
//         if(arr[i]==ele){
//             return i;
//         }
//     }
//     return -1;
// }

// int binary_search(int arr[],int size,int ele){
//     int low=0;
//     int high=size-1;

//     while(low<=high){
//         int mid= (low+high)/2;
//         if(arr[mid]==ele){
//             return mid;
//         }
//         else if(ele<arr[mid]){
//             high=mid;
//         }
//         else if(ele>arr[mid]){
//             low=mid;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int x;
//     cout<<"enter element whose index is to be searched : ";
//     cin>>x;
//     if(binary_search(arr,10,x)==-1){
//         cout<<"element not found !"<<endl;
//     }
//     else{
//         cout<<"index of element "<<x<<" is : "<<binary_search(arr,10,x)<<endl;
//     }
//     return 0;
// }


// void bubble_sort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp;
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int size;
//     int arr[10]={64,34,25,12,22,11,90};
//     size=7;
//     bubble_sort(arr,size);
//     return 0;
// }


//ques 3 
//3) Given an array of n-1 distinct integers in the range of 1 to n, find the missing number
// in it in a Sorted Array
// (a) Linear time
// (b) Using binary search.


// void missing_linear(int arr[],int size){
//     for(int i=0;i<size;i++){
//         if(arr[i]!=i+1){
//             cout<<"missing number was : "<<i+1<<endl;
//             return;
//         }
//     }
//     cout<<"missing was : "<<size<<endl;

// }
// int main(){
//     int n=10;
//     int arr[10]={1,2,3,4,5,6,7,8,9};
//     missing_linear(arr,n);
//     return 0;
// }

//using binary search

// void missing_binary(int arr[], int size){
//     int low=0;
//     int high=size-1;
//     while(low<=high){
//         int mid= (low+high)/2;
//         if(arr[mid]==mid+1){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     cout<<"the missing number was : "<<low+1<<endl;
// }
// int main(){
//     int arr[10]={1,2,4,5,6,8,9};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     missing_binary(arr,n);
//     return 0;
// }


//ques 8

// Write a program to count the total number of distinct elements in an array of length
// n.

// void count_duplicate(int arr[],int size){
//     int uni_count=0;

//     for(int i=0;i<size;i++){
//         bool isduplicate= false;
//         for(int j=0;j<i;j++){
//             if(arr[j]==arr[i]){
//                 isduplicate=true;
//             }
//         }
//         if(!isduplicate){
//             uni_count+=1;
//         }
//     }

//     cout<<"unique elements are : "<<uni_count<<endl;

// }
// int main(){
//     int n=10;
//     int arr[15]={1,2,3,4,3,2,1,2,3,2};
//     count_duplicate(arr,n);
//     return 0;
// }
// void count_duplicate(int arr[],int size){
//     int dup_count=0;

//     for(int i=0;i<size-1;i++){

//         for(int j=i+1;j<size;j++){
//             if(arr[j]==arr[i]){
//                 isduplicate=true;
//             }
//         }
//         if(!isduplicate){
//             uni_count+=1;
//         }
//     }

//     cout<<"unique elements are : "<<uni_count<<endl;

// }
// int main(){
//     int n=10;
//     int arr[15]={1,2,3,4,3,2,1,2,3,2};
//     count_duplicate(arr,n);
//     return 0;
// }
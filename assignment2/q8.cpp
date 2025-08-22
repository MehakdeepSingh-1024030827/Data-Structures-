#include<iostream>
#include<string>
using namespace std;



void count_duplicate(int arr[],int size){
    int uni_count=0;

    for(int i=0;i<size;i++){
        bool isduplicate= false;
        for(int j=0;j<i;j++){
            if(arr[j]==arr[i]){
                isduplicate=true;
            }
        }
        if(!isduplicate){
            uni_count+=1;
        }
    }

    cout<<"unique elements are : "<<uni_count<<endl;

}
int main(){
    int n=10;
    int arr[15]={1,2,3,4,3,2,1,2,3,2};
    count_duplicate(arr,n);
    return 0;
}
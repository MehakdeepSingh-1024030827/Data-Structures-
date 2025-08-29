#include<iostream>
using namespace std;


class implement{
    public :

    void diagnol_matrix(){
        int n1;
        cout<<"enter non-zero elements : ";
        cin>>n1;
        int *arr;
        arr= new int[n1];
        for(int i=0;i<n1;i++){
            int ele;
            cout<<"enter : ";
            cin>>ele;
            arr[i]=ele;
        }
        cout<<"diagnol matrix is : "<<endl;
        for(int i=0;i<n1;i++){
            for(int j=0;j<n1;j++){
                if(i==j){
                    cout<<arr[i]<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }
            cout<<endl;
        }

    }


    void tri_diagnol(){
        int n2;
        cout<<"enter size of matrix [square] : ";
        cin>>n2;

        int size=3*n2-2;

        int *arr;
        arr= new int[size];
        for(int i=0;i<size;i++){
            int ele;
            cout<<"enter element : ";
            cin>>ele;
            arr[i]=ele;
        }
        cout<<"tri-diagnol matrix is .."<<endl;
        for(int i=0;i<n2;i++){
            for(int j=0;j<n2;j++){
                if(i==j || i-j==-1||i-j==1){
                    cout<<arr[i]<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }
            cout<<endl;
        }
    }

    void triangular(){
        int n3;
        int *arr;
        cout<<"enter size of matrix : ";
        cin>>n3;

        int size= ((n3)*(n3+1))/2;

        arr= new int[size];

        for(int i=0;i<size;i++){
            int ele;
            cout<<"enter element : ";
            cin>>ele;
            arr[i]=ele;
        }

        cout<<"printing triangluar matrix : "<<endl;

        cout<<"upper triangular matrix : "<<endl;

        for(int i=0;i<n3;i++){
            for(int j=0;j<n3;j++){
                if(i==j || j>i){
                    cout<<arr[i]<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }
            cout<<endl;
        }
        cout<<"lower triangular matrix : "<<endl;

        for(int i=0;i<n3;i++){
            for(int j=0;j<n3;j++){
                if(i==j || i>j){
                    cout<<arr[i]<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }
            cout<<endl;
        }

    }
    
    void symmetric(){
        
    }
};
int main(){
    implement arr1,arr2,arr3,arr4;
    arr1.diagnol_matrix();
    arr2.tri_diagnol();
    arr3.triangular();
    arr4.symmetric();

}
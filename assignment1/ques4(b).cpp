#include<iostream>
#include<vector>
using namespace std;


// matrix multiplication 


// to find matrix multiplication 
void create_matrix(){
    int rows1,cols1;
    int rows2,cols2;
    for(int i=0;i<2;i++){
        if(i==0){
            cout<<"enter rows for matrix "<<i+1<<" : ";
            cin>>rows1;
            cout<<"enter columns for matrix "<<i+1<<" : ";
            cin>>cols1;
        }
        if(i==1){
            cout<<"enter rows for matrix "<<i+1<<" : ";
            cin>>rows2;
            cout<<"enter columns for matrix "<<i+1<<" : ";
            cin>>cols2;
        }
    }
    vector<vector<int>> arr1(rows1, vector<int>(cols1));
    vector<vector<int>> arr2(rows2, vector<int>(cols2));

    cout<<"enter elements for matrices ..."<<endl;

    for(int i=0;i<2;i++){
        if(i==0){
            cout<<"for first matrix..."<<endl;
            for(int r=0;r<rows1;r++){
                for(int c=0;c<cols1;c++){
                    cout<<"enter element of index "<<r<<","<<c<<" : "<<endl;
                    cin>>arr1[r][c];
                }
            }
        }
        if(i==1){
            cout<<"for second matrix..."<<endl;
            for(int r=0;r<rows2;r++){
                for(int c=0;c<cols2;c++){
                    cout<<"enter element of index "<<r<<","<<c<<" : "<<endl;
                    cin>>arr2[r][c];
                }
            }
        }

    }
}

void multiply(vector<vector<int>> &m1, vector<vector<int>> &m2){
    int r1= m1.size();
    int c1= m1[0].size();

    int r2= m2.size();
    int c2= m2[0].size();


    if(c1!=r2){
        cout<<"multipliction not possible !"<<endl;
    }
    else{
        int ele=0;
        vector<vector<int>> mult(r1,vector<int>(c2));
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                for(int k=0;k<c1;k++){
                    mult[i][j]=m1[i][k]*m2[k][j];
                }
            }
        }
    }
}
int main(){
    create_matrix();
    return 0;
}

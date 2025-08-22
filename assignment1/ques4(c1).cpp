#include<iostream>
#include<vector>
using namespace std;

 // transpose of a matrix 

void transpose(const vector<vector<int>>&mat){

    int nrows= mat[0].size();
    int cols= mat.size();
    vector<vector<int>> trans(nrows, vector<int>(cols));

    for(int i=0;i<cols;i++){
        for(int j=0;j<nrows;j++){
            trans[j][i]= mat[i][j];
        }
    }

    for(int i=0;i<nrows;i++){
        for(int j=0; j<cols; j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int rows,cols;
    cout<<"enter rows : ";
    cin>>rows;
    cout<<"enter columns : ";
    cin>>cols;
    vector<vector<int>>arr(rows,vector<int>(cols));
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"enter element for pos : "<<i+1<<","<<j+1<<" : ";
            cin>>arr[i][j];
        }
    }
    cout<<"original matrix is : "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"transpose matrix is : "<<endl;
    transpose(arr);
    return 0;
}

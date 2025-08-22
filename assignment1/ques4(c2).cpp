#include<iostream>
#include<vector>
using namespace std;


// // transpose for square matrix 

void transpose_sq(vector<vector<int> >&mat){
    int n= mat.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp= mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<'\n';
    }
}
int main(){
    int side;
    cout<<"enter side : ";
    cin>>side;
    vector<vector<int> > arr(side,vector<int>(side));
    for(int i=0;i<side;i++){
        for(int j=0;j<side;j++){
            cout<<"enter element "<<i+1<<','<<j+1<<" : ";
            cin>>arr[i][j];
        }
    }
    cout<<"origial matrix is as follows : "<<endl;
    for(int i=0;i<side;i++){
        for(int j=0; j<side; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<'\n';
    }
    cout<<'\n'<<"transposed matrix is : "<<'\n';
    transpose_sq(arr);
    return 0;
}


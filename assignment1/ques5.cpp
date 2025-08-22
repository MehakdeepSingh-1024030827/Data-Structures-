#include<iostream>
#include<vector>
using namespace std;

void _sum(const vector<vector<int>> &matrix){
    int r_count= matrix.size();
    int c_count= matrix[0].size();
    
    int sum_rows=0;
    int sum_cols=0;

    for(int i=0;i<r_count;i++){
        for(int j=0;j<c_count;j++){
            sum_rows=sum_rows+matrix[i][j];
        }
        cout<<"sum of elements of row "<<i+1<<" is "<<sum_rows<<endl;
        sum_rows=0;
    }
    for(int j=0;j<c_count;j++){
        for(int i=0;i<r_count;i++){
            sum_cols=sum_cols+matrix[i][j];
        }
        cout<<"sum of elements of column "<<j+1<<" is "<<sum_cols<<endl;
        sum_cols=0;
    }
}
int main(){
    int rows;
    int cols;

    cout<<"enter number of rows : ";
    cin>>rows;
    cout<<"enter number of columns : ";
    cin>>cols;

    vector<vector<int>> arr(rows,vector<int>(cols));

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"enter element number of index "<<i<<","<<j<<" : ";
            cin>>arr[i][j];
        }
    }

    _sum(arr);

    return 0;
}

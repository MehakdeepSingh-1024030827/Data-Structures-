#include<iostream>
#include<vector>
using namespace std;

//create an array;

// int main(){
//     int arr[5];
//     return 0;
// };j++

// display array;

// int main(){
//     int arr[5],j;
//     for(j=0;j<5;j++){
//         arr[j]=j+1;
//     }
//     for(j=0;j<5;j++){
//         cout<<arr[j]<<" ";
//     }
//     return 0;
// }

//insert an element at a given position 

// void insert_ele(int arr[],int n,int ele, int pos){
//     int i;
//     for(i=n;i>=pos;i--){
//         arr[i]=arr[i-1];
//     }
//     n++;
//     arr[pos-1]=ele;
//     cout<<"new array is : "<<endl;
//     for(i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[10],n,i,element, position;
//     n=5;
//     for(i=0;i<n;i++){
//         arr[i]=i+1;
//     }
//     cout<<"enter value to be inserted : ";
//     cin>>element;
//     cout<<"enter the position at which the element is to be inserted : ";
//     cin>>position;

//     insert_ele(arr,5,element,position);

//     return 0;
// }



//delete element (linear_search is also included)




// int linear_search(int arr[],int n, int ele){
//     int i;
//     for(i=0;i<n;i++){
//         if(arr[i]==ele){
//             return i;
//         }
//     }
//     return -1;
// }
// void remove_ele(int arr[],int n,int ele, int index){
//     int i;
//     for(i=index;i<n;i++){
//         arr[i]=arr[i+1];
//     }
//     n--;
//     cout<<"array after deletion is : "<<endl;
//     for(i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[10],n,i,element,idx;
//     n=5;
//     for(i=0;i<5;i++){
//         arr[i]=i+1;
//     }
//     cout<<"enter element to be deleted : ";
//     cin>>element;
//     if(linear_search(arr,5,element)== -1){
//         cout<<"element not found ! "<<endl;
//     }
//     else{
//         idx=linear_search(arr,5,element);
//         remove_ele(arr,5,element,idx);
//     }
//     return 0;
// }



// logic to remove duplicate elements and return new array with unique elements 



// int del_dup(int arr[],int n, int index){
//     int i;
//     for(i=index;i<n;i++){
//         arr[i]=arr[i+1];
//     }
//     return n-1;
// }
// void find_dup(int arr[],int n){
//     int i,j;
//     for(i=0;i<n;i++){
//         for(j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 n=del_dup(arr,n,j);
//             }
//         }
//     }
//     for(i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){.
//     int arr[20]={1,2,3,4,5,4,3,2,1,5};
//     int size=10;
//     find_dup(arr,10);
//     return 0;
// }



// reverse tha elements of an array

// void reverse(int arr[],int n){

// }
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
// }

// void reverse(int arr[],int n){
//     int t= n/2;
//     for(int i=0;i<t;i++){
//         int temp= arr[i];
//         arr[i]=arr[n-i-1];
//         arr[n-i-1]=temp;;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9};
//     int size=9;
//     reverse(arr,size);
//     return 0;
// }



// matrix multiplication 


// to find matrix multiplication 


// void create_matrix(){
//     int rows1,cols1;
//     int rows2,cols2;
//     for(int i=0;i<2;i++){
//         if(i==0){
//             cout<<"enter rows for matrix "<<i+1<<" : ";
//             cin>>rows1;
//             cout<<"enter columns for matrix "<<i+1<<" : ";
//             cin>>cols1;
//         }
//         if(i==1){
//             cout<<"enter rows for matrix "<<i+1<<" : ";
//             cin>>rows2;
//             cout<<"enter columns for matrix "<<i+1<<" : ";
//             cin>>cols2;
//         }
//     }
//     vector<vector<int>> arr1(rows1, vector<int>(cols1));
//     vector<vector<int>> arr2(rows2, vector<int>(cols2));

//     cout<<"enter elements for matrices ..."<<endl;

//     for(int i=0;i<2;i++){
//         if(i==0){
//             cout<<"for first matrix..."<<endl;
//             for(int r=0;r<rows1;r++){
//                 for(int c=0;c<cols1;c++){
//                     cout<<"enter element of index "<<r<<","<<c<<" : "<<endl;
//                     cin>>arr1[r][c];
//                 }
//             }
//         }
//         if(i==1){
//             cout<<"for second matrix..."<<endl;
//             for(int r=0;r<rows2;r++){
//                 for(int c=0;c<cols2;c++){
//                     cout<<"enter element of index "<<r<<","<<c<<" : "<<endl;
//                     cin>>arr2[r][c];
//                 }
//             }
//         }

//     }
// }

// void multiply(vector<vector<int>> &m1, vector<vector<int>> &m2){
//     int r1= m1.size();
//     int c1= m1[0].size();

//     int r2= m2.size();
//     int c2= m2[0].size();


//     if(c1!=r2){
//         cout<<"multipliction not possible !"<<endl;
//     }
//     else{
//         int ele=0;
//         vector<vector<int>> mult(r1,vector<int>(c2));
//         for(int i=0;i<r1;i++){
//             for(int j=0;j<c2;j++){
//                 for(int k=0;k<c1;k++){
//                     mult[i][j]=m1[i][k]*m2[k][j];
//                 }
//             }
//         }
//     }
// }
// int main(){
//     create_matrix();
//     return 0;
// }


// // transpose of a matrix 

// void transpose(const vector<vector<int>>&mat){

//     int nrows= mat[0].size();
//     int cols= mat.size();
//     vector<vector<int>> trans(nrows, vector<int>(cols));

//     for(int i=0;i<cols;i++){
//         for(int j=0;j<nrows;j++){
//             trans[j][i]= mat[i][j];
//         }
//     }

//     for(int i=0;i<nrows;i++){
//         for(int j=0; j<cols; j++){
//             cout<<trans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int rows,cols;
//     cout<<"enter rows : ";
//     cin>>rows;
//     cout<<"enter columns : ";
//     cin>>cols;
//     vector<vector<int>>arr(rows,vector<int>(cols));
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<"enter element for pos : "<<i+1<<","<<j+1<<" : ";
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"original matrix is : "<<endl;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"transpose matrix is : "<<endl;
//     transpose(arr);
//     return 0;
// }




// // for square matrix 

// void transpose_sq(vector<vector<int> >&mat){
//     int n= mat.size();
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             int temp= mat[i][j];
//             mat[i][j]=mat[j][i];
//             mat[j][i]=temp;
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<'\n';
//     }
// }
// int main(){
//     int side;
//     cout<<"enter side : ";
//     cin>>side;
//     vector<vector<int> > arr(side,vector<int>(side));
//     for(int i=0;i<side;i++){
//         for(int j=0;j<side;j++){
//             cout<<"enter element "<<i+1<<','<<j+1<<" : ";
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"origial matrix is as follows : "<<endl;
//     for(int i=0;i<side;i++){
//         for(int j=0; j<side; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<'\n';
//     }
//     cout<<'\n'<<"transposed matrix is : "<<'\n';
//     transpose_sq(arr);
//     return 0;
// }



//program to find sum of every row and column in 2-d array 

// void _sum(const vector<vector<int>> &matrix){
//     int r_count= matrix.size();
//     int c_count= matrix[0].size();
    
//     int sum_rows=0;
//     int sum_cols=0;

//     for(int i=0;i<r_count;i++){
//         for(int j=0;j<c_count;j++){
//             sum_rows=sum_rows+matrix[i][j];
//         }
//         cout<<"sum of elements of row "<<i+1<<" is "<<sum_rows<<endl;
//         sum_rows=0;
//     }
//     for(int j=0;j<c_count;j++){
//         for(int i=0;i<r_count;i++){
//             sum_cols=sum_cols+matrix[i][j];
//         }
//         cout<<"sum of elements of column "<<j+1<<" is "<<sum_cols<<endl;
//         sum_cols=0;
//     }
// }
// int main(){
//     int rows;
//     int cols;

//     cout<<"enter number of rows : ";
//     cin>>rows;
//     cout<<"enter number of columns : ";
//     cin>>cols;

//     vector<vector<int>> arr(rows,vector<int>(cols));

//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<"enter element number of index "<<i<<","<<j<<" : ";
//             cin>>arr[i][j];
//         }
//     }

//     _sum(arr);

//     return 0;
// }

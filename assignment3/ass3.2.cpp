#include<iostream>
#include<string>
using namespace std;

string reversed(string inp){
    string rev="";
    stack<char>st;
    for(int i=0;i<inp.length();i++){
        st.push(inp[i]);
    }
   while(!st.empty()){
    rev=rev+st.top();
    st.pop();
   }
   return rev;
}
int main(){
    string s;
    cout<<"input the string : ";
    getline(cin,s);
    cout<<"reversed string is : "<<reversed(s)<<endl;
    return 0;
}
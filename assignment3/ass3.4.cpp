// #include<iostream>
// #include<string>
// #include<stack>
// using namespace std;

// int priority(char c){
//     if(c=='^'){
//         return 3;
//     }
//     else if(c=='*' || c=='/'){
//         return 2;
//     }
//     else if(c=='+' || c=='-'){
//         return 1;
//     }
//     else{
//         return -1;
//     }
// }
// bool isoperand(char c){
//     if((c>='a'&&c<='z')||(c>='0'&&c<='9')||(c>='A'&&c<='Z')){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// string InfixtoPostfix(string s){
//     string ans="";
//     stack<char>st;

//     for(int i=0;i<s.length();i++){
//         char ch=s[i];

//         if(isoperand(ch)){
//             ans=ans+ch;
//         }

//         else if(ch=='('){
//             st.push(ch);
//         }

//         else if(ch==')'){
//             while(!st.empty()&& st.top()!='('){
//                 ans=ans+st.top();
//                 st.pop();
//             }
//             st.pop();
//         }

//         else{
//             while(!st.empty() && priority(ch)<=priority(st.top())){
//                 ans=ans+st.top();
//                 st.pop();
//             }
//             st.push(ch);
//         }
//     }
//     while(!st.empty()){
//         ans=ans+st.top();
//         st.pop();
//     }
//     return ans;
// }
// int main(){
//     string inp="(a+b)*(c-d/e)";
//     cout<<"postfix expression is : "<<endl;
//     cout<<InfixtoPostfix(inp)<<endl;
// }
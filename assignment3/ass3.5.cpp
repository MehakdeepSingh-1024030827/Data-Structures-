#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isoperand(char c){
    if(c>='0'&&c<='9'){
        return true;
    }
    else{
        return false;
    }
}
int EvalPostfix(string s){
    stack<int>ans;
    for(int i=0;i<s.length();i++){
        char ch=s[i];

        if(isoperand(ch)){
            ans.push(ch-'0');
        }

        else{
            int top1=ans.top();
            ans.pop();
            int top2=ans.top();
            ans.pop();
            int temp=0;

            switch(ch){
                case '+' :
                temp=top2+top1;
                break;
                case '-':
                temp=top2-top1;
                break;
                case '*':
                temp=top2*top1;
                break;
                case '/':
                temp=top2/top1;
                break;
                case '^':
                temp=pow(top2,top1);
                break;
            }
            ans.push(temp);
        }
    }
    return ans.top();
}
int main(){
    string inp="53+62/*";
    cout<<EvalPostfix(inp)<<endl;
    return 0;
}
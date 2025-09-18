#include<iostream>
#include<string>
using namespace std;

bool balancedparenthesis(string s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        char ch=s[i];

        if((ch=='(')||(ch=='[')||(ch=='{')){
            st.push(ch);
        }

        else{
            if(!st.empty()){
                char top=st.top();
                if((top=='(' && ch==')')||(top=='{' && ch=='}')||(top=='[' && ch==']')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(st.empty()){
        return true;
        }
    else{
        return false;
        }
}
int main(){
    string s1="{[()]}";
    string s2="{{)}";
    if(balancedparenthesis(s1)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    if(balancedparenthesis(s2)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}

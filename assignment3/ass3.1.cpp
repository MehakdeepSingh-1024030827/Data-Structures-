#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int size;
    int top;
    public :

    Stack(int n){
        this->size=n;
        arr=new int[size];
        top=-1;
    }
    void push(int ele){
        if(size-top>1){
            top=top+1;
            arr[top]=ele;
        }
        else{
            cout<<"stack overlflow ! "<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top=top-1;
        }
        else{
            cout<<"stack underflow ! "<<endl;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isFull(){
        if(top==size-1){
            return true;
        }
        else{
            return false;
        }
    }

    void display(){
        cout<<"the stack is : "<<endl;
        for(int i=0;i<top;i++){
            cout<<arr[i]<<endl;
        }
    }

    void peek(){
        cout<<"topmost element is : "<<endl;
        if(top>=0){
            cout<<arr[top]<<endl;
        }
        else{
            cout<<"stack is empty ! "<<endl;
        }
    }
};
int main(){
    Stack s1(8);
    for(int i=0;i<8;i++){
        s1.push(i+1);
    }
    s1.display();
    s1.peek();
    s1.pop();
    s1.peek();
    if(s1.isFull()){
        cout<<"yes stack is full ! "<<endl;
    }
    else{
        cout<<"no stack is not full "<<endl;
    }
   if(s1.isEmpty()){
    cout<<"yes stack is empty "<<endl;
   }
   else{
    cout<<"no the stack is not empty"<<endl;
   }

    return 0;
}
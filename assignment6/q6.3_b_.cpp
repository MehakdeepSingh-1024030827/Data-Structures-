#include<iostream>
using namespace std;

class Node{

    public :

    int data;
    Node* prev;
    Node* next;

    Node(int data){

        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
};
void InsertAtTail(Node* &head, Node* &tail, int d){

    Node* temp = new Node(d);

    if(tail == NULL){
        tail = temp;
        head = temp;
        temp -> next = temp;
        temp -> prev = temp;
    }

    else{

        tail -> next = temp;
        temp -> prev = tail;

        temp -> next = head;
        head -> prev = temp;
        tail = temp;
    }
}
void FindSize(Node* &head){

    if(head == NULL){
        cout<<" list is empty ! "<<endl;
    }
    
    else{

        int count = 0 ;
        
        Node* temp = head;

        do{
            count++;
            temp = temp -> next;
        }
        while(temp != head);

        cout<<"size of the circular linked list is : "<<count<<endl;
    }
}
int main(){
    Node* list = new Node(1);
    Node* head = list;
    Node* tail = list;
    for(int i = 2 ; i <= 5 ; i++){
        InsertAtTail(head, tail, i);
    }
    FindSize(head);
    return 0;
}
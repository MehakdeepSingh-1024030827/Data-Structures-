#include<iostream>
using namespace std;

class Node{

    public :
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
};
void InsertAtTail(Node* &head, Node* &tail, int d){

    Node* temp = new Node(d);
    if(tail == NULL){
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
void Print(Node* &head, Node* &tail){

    if(head == NULL){
        cout<<"list is empty"<<endl;
    }

    else{
        Node* temp = head;
        do{
            cout<<temp->data<<" ";
            temp = temp -> next;
        }
        while(temp!=head);
        cout<<temp->data<<" ";
        cout<<endl;
    }
}
int main(){
    Node* list = new Node(20);
    Node* head = list;
    Node* tail = list;
    InsertAtTail(head, tail, 100);
    InsertAtTail(head, tail, 40);
    InsertAtTail(head, tail, 80);
    InsertAtTail(head, tail, 60);
    Print(head,tail);
}
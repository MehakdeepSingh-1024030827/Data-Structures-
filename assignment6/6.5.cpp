#include<iostream>
using namespace std;

class Node{

    public :
    int data;
    Node* next;

    Node(int data){

        this -> data = data;
        Node* next = NULL;
    }
};
void InsertAtTail(Node* &head, Node* &tail, int d){

    Node* temp = new Node(d);

    if(head == NULL){
        head = temp;
        tail = temp;
    }

    else{
        tail -> next = temp;
        tail = temp;
    }
}
void CheckCircular(Node* &head, Node* &tail){

    if(tail -> next == head){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}
int main(){
    Node* newnode = new Node(10);
    Node* head = newnode;
    Node* tail = newnode;
    InsertAtTail(head,tail,20);
    InsertAtTail(head,tail,30);
    InsertAtTail(head,tail,40);
    InsertAtTail(head,tail,50);
    cout<<"before making it circular : "<<endl;
    CheckCircular(head,tail);
    tail -> next = head;
    cout<<"after making it circular : "<<endl;
    CheckCircular(head,tail);
}
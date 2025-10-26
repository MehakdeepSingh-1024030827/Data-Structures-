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
        tail = temp;
    }
    else{
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}
void FindSize(Node* &head){

    if(head == NULL){
        cout<<"list is empty ! "<<endl;
    }
    else{
        int count = 0;

        Node* temp = head;

        while(temp != NULL){
            temp = temp -> next;
            count++;
        }
        cout<<"size of the doubly linked list is : "<<count<<endl;
    }
}
int main(){
    Node* list1 = new Node(10);
    Node* head = list1;
    Node* tail = list1;
    InsertAtTail(head,tail,20);
    InsertAtTail(head,tail,30);
    InsertAtTail(head,tail,40);
    InsertAtTail(head,tail,50);
    FindSize(head);
}
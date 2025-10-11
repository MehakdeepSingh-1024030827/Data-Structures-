#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void InsertAtHead(Node* &head, int data){

    Node* temp = new Node(data);

    temp -> next = head;
    head = temp;
}
void Print(Node* &head){

    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int FindPosition(Node* &head, Node* &address){

    Node* temp = head;
    int position = 0;

    while(temp!=NULL){
        if(temp == address){
            return position;
        }
        temp = temp -> next;
        position ++;
    }
    return -1;
}
void Delete(Node* &head, int position){
    
    Node* temp = head;
    int pos = position;

    if(pos==1){
        head = temp -> next;
        delete temp;
    }
    else{
        int count = 1;
        while(count<pos-1 && temp != NULL){
            temp = temp -> next;
            count++;
        }
        Node* todelete = temp->next;
        
        if(todelete -> next == NULL){
            temp -> next = NULL;
            delete todelete;
        }
        else{
            temp -> next = todelete -> next;
            delete todelete;
        }
    }
}
void CountAndRemoveDuplicates(Node* &head, int key);
int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    InsertAtHead(head,3);
    InsertAtHead(head,1);
    InsertAtHead(head,2);
    InsertAtHead(head,1);
    InsertAtHead(head,2);
    InsertAtHead(head,1);
    CountAndRemoveDuplicates(head,1);
    // cout<<FindPosition(head,10);
    return 0;
}

void CountAndRemoveDuplicates(Node* &head, int key){

    Node* temp = head;
    int count = 0;

    while(temp!=NULL){

        if(temp -> data == key){
            
            Node* hold = temp;
            count = 1;

            Node* check = hold->next;

            while(check!=NULL){

                if(check->data == key){

                    count++;
                    int p = FindPosition(head, check);

                    Node* checkNext = check->next;

                    Delete(head,p);

                    check = checkNext;
                }
                else{
                    check = check -> next;
                }
            }

            int p = FindPosition(head,hold);
            Node* holdnext = hold -> next;
            Delete(head, p);
            hold = holdnext;
            break;

        }
        else{
            temp = temp ->next;
        }
    }
    cout<<"occurences are : "<<count<<endl;
    Print(head);
}
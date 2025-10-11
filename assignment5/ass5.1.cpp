#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }


    void InsertAtBeginning(Node* &head, int data){

        Node* temp = new Node(data);

        temp -> next = head;
        head = temp;
    }

    void InsertAtLast(Node* &tail, int data){

        Node* temp = new Node(data);

        tail->next = temp;
        tail = temp;
    }

    int FindPosition(Node* &head, int value){

        Node* temp = head;
        int count = 1;

        while(temp!=NULL){

            if(temp->data==value){
                return count;
            }
            temp = temp->next;
            count++;
        }

        return -1;
    }

    void InsertBefore(Node* &head, int value){
        
        int pos = FindPosition(head,value);

        if(pos==-1){
            cout<<"error"<<endl;
        }
        else{
            Node* temp = head;

            if(pos==1){
                InsertAtBeginning(head,value-1);
            }
            else{
                int count = 1;

                while(count<pos-1){
                    temp = temp->next;
                    count++;
                }
                Node* Nodebefore = new Node(value-1);

                Nodebefore->next = temp->next;
                temp->next = Nodebefore;
            }

        }
    }

    void InsertAfter(Node* head, int value){

        int pos = FindPosition(head, value);

        if(pos==-1){
            cout<<"error"<<endl;
        }
        else{

            Node* temp = head;
            int count = 1;
            
            while(count<pos){
                temp = temp->next;
                count++;
            }
            Node* nodeafter = new Node(value+1);
            if(temp->next==NULL){
                temp->next = nodeafter;
            }
            else{
                nodeafter->next = temp -> next;
                temp->next = nodeafter;
            }
        }
    }

    void DeleteFromBeginning(Node* &head, int position){

        Node* temp = head;

        if(position == 1){
            
            head = temp -> next;
            delete temp;
        }

        else{
            int count = 1;

            while(count<position-1){

                temp = temp->next;
                count++;
            }
            Node* todelete = temp->next;

            if(todelete->next==NULL){
                temp->next = NULL;
                delete todelete;
            }
            else{
                temp->next = todelete->next;
                delete todelete;
            }
        }
       
    }

    void DeleteFromEnd(Node* &head, int position){
    Node* temp = head;
    
    int length = 0;
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    
   
    int positionFromStart = length - position + 1;
    
    DeleteFromBeginning(head, positionFromStart);
    }

    void DeleteSpecific(Node* &head, int value){

        int pos = FindPosition(head, value);

        DeleteFromBeginning(head, pos);
    }

    void Search(Node* &head, int value){
        Node* temp = head;


        while(temp->data!=value && temp!=NULL){
            temp = temp -> next;
        }
        int pos = FindPosition(head, temp->data);
        cout<<"position of node with data value "<< value <<" from the head of node is : "<<pos<<endl;
    }
    void Print(Node* &head){

        Node* temp = head;

        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

};
int main(){
    Node* newnode = new Node(10);
    Node* head = newnode;
    for(int i=20;i<=50;i=i+10){
        newnode->InsertAtBeginning(newnode,i);
    }
    newnode->Print(newnode);
    Node* tail = newnode;
    int choice;
    cout<<"enter which type of operation you want to perform : ";
    cin>>choice;
    switch(choice){

        case 1 : 
        newnode->InsertAtBeginning(newnode, 60);
        newnode->Print(newnode);
        break;

        case 2:
        newnode->InsertAtLast(tail,70);
        newnode->Print(newnode);

        case 3:
        newnode->InsertBefore(newnode,20);
        newnode->Print(newnode);

        case 4:
        newnode->InsertAfter(newnode,10);
        newnode->Print(newnode);

        case 5:
        newnode->DeleteFromBeginning(newnode,3);
        newnode->Print(newnode);
        
        case 6 :
        newnode->DeleteFromEnd(newnode,2);
        newnode->Print(newnode);

        case 7 :
        newnode->DeleteSpecific(newnode,40);
        newnode->Print(newnode);

        case 8 :
        newnode->Search(newnode, 20);
    }


    return 0;
}
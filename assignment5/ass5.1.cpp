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
    cout<<"enter which type of operation you want to perform : "<<endl;
    cout<<"For Inserting a data value at beginning ENTER 1 : "<<endl;
    cout<<"For Inserting a data value at last ENTER 2 : "<<endl;
    cout<<"For Inserting a data value before any other ENTER 3 : "<<endl;
    cout<<"For Inserting a data value after any other ENTER 4 : "<<endl;
    cout<<"For Deleting a data value from beginning ENTER 5 : "<<endl;
    cout<<"For Deleting a data value from last ENTER 6 : "<<endl;
    cout<<"For Deleting a specific data value ENTER 7 : "<<endl;
    cout<<"For searching a value ENTER 8 : "<<endl;
    cin>>choice;
    switch(choice){

        case 1 : 
        int x1;
        cout<<"enter value to insert : ";
        cin>>x1;
        newnode->InsertAtBeginning(newnode, x1);
        newnode->Print(newnode);
        break;

        case 2:
        int x2;
        cout<<"enter value to insert : ";
        cin>>x2;
        newnode->InsertAtLast(tail,x2);
        newnode->Print(newnode);

        case 3:
        int x3;
        cout<<"enter data value before which it is to be inserted : ";
        cin>>x3;
        newnode->InsertBefore(newnode,x3);
        newnode->Print(newnode);

        case 4:
        int x4;
        cout<<"enter data value after which it is to be inserted : ";
        cin>>x4;
        newnode->InsertAfter(newnode,x4);
        newnode->Print(newnode);

        case 5:
        int x5;
        cout<<"enter postion from starting where element is to be deleted : ";
        cin>>x5;
        newnode->DeleteFromBeginning(newnode,x5);
        newnode->Print(newnode);
        
        case 6 :
        int x6;
        cout<<"enter postion from last where element is to be deleted : ";
        cin>>x6;
        newnode->DeleteFromEnd(newnode,x6);
        newnode->Print(newnode);

        case 7 :
        int x7;
        cout<<"enter element which is to be deleted : ";
        cin>>x7;
        newnode->DeleteSpecific(newnode,x7);
        newnode->Print(newnode);

        case 8 :
        int x8;
        cout<<"enter element which is to be searched : ";
        cin>>x8;
        newnode->Print(newnode);
        newnode->Search(newnode, x8);
    }


    return 0;
}
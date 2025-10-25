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
void InsertAtHead(Node* &head, Node* &tail, int d){

    Node* temp = new Node(d);

    if(head == NULL){
        head = tail = NULL;
        temp -> next = temp;
        temp -> prev = temp;
    }
    else{
        temp -> next = head;
        temp -> prev = tail;
        tail -> next = temp;
        head -> prev = temp;
        head = temp;
    }
    cout<<"insertion at head sucessfull "<<endl;
}
void InsertAtTail(Node* &head, Node* &tail, int d){

    Node* newnode = new Node(d);

    if(tail == NULL){
        head = tail = newnode;
        newnode -> next = newnode;
        newnode -> prev = newnode;
    }
    else{
         tail -> next = newnode;
        newnode -> prev = tail;
        newnode -> next = head;
        head -> prev = newnode;
        tail = newnode;
    }
    cout<<"insertion at tail successfull"<<endl;
}
void InsertBefore(Node* &head,Node* &tail, int value, int d){

    Node* temp = head;

    if(head == NULL){
        cout<<"list is empty ! "<<endl;
    }
    else{

        while(temp -> data != value){
            temp = temp -> next;
        }

        // now node is to be inserted between prevnode and temp;

        // if it is at head
        if(temp -> prev == tail){
            InsertAtHead(head,tail,d);
        }

        else{
            Node* newnode = new Node(d);
            Node* prevnode = temp -> prev;

            prevnode -> next = newnode;
            newnode -> prev = prevnode;

            newnode -> next = temp;
            temp -> prev = newnode;
        }
    }
    cout<<"insertion before successfull"<<endl;
}

void InsertAfter(Node* &head, Node* &tail, int value, int d){

    if(head == NULL){
        cout<<"list is empty"<<endl;
    }
    else{
        Node* temp = head;

        while(temp -> data != value){
            temp = temp -> next;
        }
        
        // if it is tail

        if(temp -> next == head){
            InsertAtTail(head,tail,d);
        }

        else{
            Node* newnode = new Node(d);
            Node* nextnode = temp -> next;

            temp -> next = newnode;
            newnode -> prev = temp;

            newnode -> next = nextnode;
            nextnode -> prev = newnode;
        }
    }
}
void DeleteSpecific(Node* &head, Node* &tail, int value){

    if(head == NULL){
        cout<<"list is empty "<<endl;
    }

    else{
        Node* temp = head;
        do {
        if(temp->data == value) break;
        temp = temp->next;
        } while(temp != head);

        if(temp -> data != value){
            cout<<"value not found"<<endl;
        }
        // if it is the only element

        if(temp -> next == temp){
            head = tail = NULL;
            delete temp;
            return;
        }
        // if it is head 

        if(temp -> prev == tail){
            
            Node* nextnode = temp -> next;

            nextnode -> prev = tail;
            tail -> next = nextnode;
            head = nextnode;

            delete temp;
            return;
        }

        // if it is tail
        if(temp -> next == head){
            Node* prevnode = temp -> prev;

            prevnode -> next = head;
            head -> prev = prevnode;
            tail = prevnode;
            delete temp;
            return;
        }

        // if it is value in between
        else{
            Node* nextnode = temp -> next;
            Node* prevnode = temp -> prev;

            prevnode -> next = nextnode;
            nextnode -> prev = prevnode;
            delete temp;
        }
    }
    cout<<"exiting delete function"<<endl;
}
void Search(Node* &head, Node* &tail, int value){

    if(head==NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    else{
        Node* temp = head;
        int count = 1;

        do{
            if(temp -> data == value){
                break;
            }
            temp = temp -> next;
        }
        while(temp!=head);
        

        if(temp -> data != value){
            cout<<"value not found"<<endl;
        }
        else{
            cout<<"Node with data value "<<value<<"found ! "<<endl;
        }
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int choice, value;
    
    while(true){
        cout << "1. Insert at Head" << endl;
        cout << "2. Insert at Tail" << endl;
        cout << "3. Delete Specific Node" << endl;
        cout << "4. Search for a Value" << endl;
        cout << "5. Display List" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice){
            case 1:
                cout << "Enter value to insert at head: ";
                cin >> value;
                InsertAtHead(head, tail, value);
                break;
                
            case 2:
                cout << "Enter value to insert at tail: ";
                cin >> value;
                InsertAtTail(head, tail, value);
                break;
                
            case 3:
                cout << "Enter value to delete: ";
                cin >> value;
                DeleteSpecific(head, tail, value);
                break;
                
            case 4:
                cout << "Enter value to search: ";
                cin >> value;
                Search(head, tail, value);
                break;
                
            case 5:
                if(head == NULL){
                    cout << "List is empty!" << endl;
                }
                else{
                    Node* temp = head;
                    cout << "Circular Doubly Linked List: ";
                    do{
                        cout << temp->data << " <-> ";
                        temp = temp->next;
                    } while(temp != head);
                    cout << "(back to head)" << endl;
                }
                break;
                
            case 6:
                cout << "Exiting program..." << endl;
                return 0;
                
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
    
    return 0;
}
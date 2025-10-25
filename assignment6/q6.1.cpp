#include<iostream>
using namespace std;


class NodeDoubly {
public:
    int data;
    NodeDoubly* prev;
    NodeDoubly* next;
    
    NodeDoubly(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};


void InsertAtHead(NodeDoubly* &head, NodeDoubly* &tail, int d) {
    NodeDoubly* temp = new NodeDoubly(d);
    
    if(head == NULL) {  
        head = temp;
        tail = temp;
    }
    else {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    cout << "Inserted at head successfully!" << endl;
}


void InsertAtTail(NodeDoubly* &head, NodeDoubly* &tail, int d) {
    NodeDoubly* temp = new NodeDoubly(d);
    
    if(tail == NULL) {  
        head = temp;
        tail = temp;
    }
    else {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    cout << "Inserted at tail successfully!" << endl;
}

void InsertBefore(NodeDoubly* &head, NodeDoubly* &tail, int value, int d) {
    if(head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    
    NodeDoubly* temp = head;
    while(temp != NULL && temp->data != value) {
        temp = temp->next;
    }
    
    if(temp == NULL) {
        cout << "Value not found in the list!" << endl;
        return;
    }
    
    if(temp->prev == NULL) {
        InsertAtHead(head, tail, d);
    }
    else {
        NodeDoubly* newnode = new NodeDoubly(d);
        NodeDoubly* prevnode = temp->prev;
        
        newnode->next = temp;
        newnode->prev = prevnode;
        prevnode->next = newnode;  
        temp->prev = newnode;
        
        cout << "Inserted successfully!" << endl;
    }
}


void InsertAfter(NodeDoubly* &head, NodeDoubly* &tail, int value, int d) {
    if(head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    
    NodeDoubly* temp = head;
    while(temp != NULL && temp->data != value) {
        temp = temp->next;
    }
    
    if(temp == NULL) {
        cout << "Value not found in the list!" << endl;
        return;
    }
    
    if(temp->next == NULL) {
        InsertAtTail(head, tail, d);
    }
    else {
        NodeDoubly* newnode = new NodeDoubly(d);
        NodeDoubly* nextnode = temp->next;
        
        newnode->next = nextnode;
        newnode->prev = temp;
        temp->next = newnode;
        nextnode->prev = newnode;
        
        cout << "Inserted successfully!" << endl;
    }
}


void DeleteSpecific(NodeDoubly* &head, NodeDoubly* &tail, int value) {
    if(head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    
    NodeDoubly* temp = head;
    while(temp != NULL && temp->data != value) {
        temp = temp->next;
    }
    
    if(temp == NULL) {
        cout << "Value not found in the list!" << endl;
        return;
    }
    
 
    if(temp->prev == NULL && temp->next == NULL) {
        head = NULL;
        tail = NULL;
        delete temp;
        cout << "Deleted successfully! List is now empty." << endl;
        return;
    }
    
   
    if(temp->prev == NULL) {
        NodeDoubly* nextnode = temp->next;
        nextnode->prev = NULL;  
        head = nextnode;
        delete temp;
        cout << "Deleted from head successfully!" << endl;
        return;
    }
    
    
    if(temp->next == NULL) {
        NodeDoubly* prevnode = temp->prev;
        prevnode->next = NULL;
        tail = prevnode;
        delete temp;
        cout << "Deleted from tail successfully!" << endl;
        return;
    }
    
    
    NodeDoubly* nextnode = temp->next;
    NodeDoubly* prevnode = temp->prev;
    prevnode->next = nextnode;
    nextnode->prev = prevnode;
    delete temp;
    cout << "Deleted " << value << " successfully!" << endl;
}


void Print(NodeDoubly* head) {
    if(head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    
    NodeDoubly* temp = head;
    cout << "Doubly Linked List: ";
    while(temp != NULL) {
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout << endl;
}


void Search(NodeDoubly* head, int value) {
    if(head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    
    NodeDoubly* temp = head;
    int position = 1;  
    
    while(temp != NULL && temp->data != value) {
        temp = temp->next;
        position++;
    }
    
    if(temp == NULL) {
        cout << "Node with data value " << value << " is not present in the linked list." << endl;
    }
    else {
        cout << "Node found!" << endl;
        cout << "Present at position: " << position << endl;
    }
}


int main() {
    NodeDoubly* head = NULL;
    NodeDoubly* tail = NULL;
    int choice, data, value;
    
    
    do {

        cout << "1. Insert at Head" << endl;
        cout << "2. Insert at Tail" << endl;
        cout << "3. Insert Before a Specific Node" << endl;
        cout << "4. Insert After a Specific Node" << endl;
        cout << "5. Delete a Specific Node" << endl;
        cout << "6. Search for a Node" << endl;
        cout << "7. Display List" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                cout << "Enter data to insert at head: ";
                cin >> data;
                InsertAtHead(head, tail, data);
                break;
                
            case 2:
                cout << "Enter data to insert at tail: ";
                cin >> data;
                InsertAtTail(head, tail, data);
                break;
                
            case 3:
                cout << "Enter the value before which to insert: ";
                cin >> value;
                cout << "Enter data to insert: ";
                cin >> data;
                InsertBefore(head, tail, value, data);
                break;
                
            case 4:
                cout << "Enter the value after which to insert: ";
                cin >> value;
                cout << "Enter data to insert: ";
                cin >> data;
                InsertAfter(head, tail, value, data);
                break;
                
            case 5:
                cout << "Enter the value to delete: ";
                cin >> value;
                DeleteSpecific(head, tail, value);
                break;
                
            case 6:
                cout << "Enter the value to search: ";
                cin >> value;
                Search(head, value);
                break;
                
            case 7:
                Print(head);
                break;
                
            case 8:
                cout << "\nExiting program. Thank you!" << endl;
                break;
                
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
        
    } while(choice != 8);
    
    return 0;
}
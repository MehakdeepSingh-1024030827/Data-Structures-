#include<iostream>
#include<string>
using namespace std;

class Node{

    public :

    char data;
    Node* next;
    Node* prev;

    Node(char data){

        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
};
void InsertAtTail(Node* &head, Node* &tail, char d){

    Node* temp = new Node(d);

    if(tail == NULL){
        tail = temp;
        head = temp;
    }

    else{
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}
void CheckPalindrome(Node* &head, Node* &tail){

    if(head == NULL){
        cout<<"list empty ! "<<endl;
    }
    else{

        if(head -> next == NULL){
            cout<<"True ! BUT ONLY HAS A SINGLE ALPHABET "<<endl;
        }

        else{
            while(head!=NULL){
                if(head -> data == tail -> data){
                    
                    head = head -> next;
                    tail = tail -> prev;

                    if(head==tail || head -> prev == tail){
                        cout<<"TRUE"<<endl;
                        break;
                    }
                }
                else{
                    cout<<"FALSE"<<endl;
                    break;
                }
            }
        }
    }
}
int main(){
    Node* word1 = new Node('L');
    Node* head1 = word1;
    Node* tail1 = word1;
    InsertAtTail(head1,tail1,'E');
    InsertAtTail(head1,tail1,'V');
    InsertAtTail(head1,tail1,'E');
    InsertAtTail(head1,tail1,'L');
    
    Node* word2 = new Node('N');
    Node* head2 = word2;
    Node* tail2 = word2;
    InsertAtTail(head2, tail2, 'O');
    InsertAtTail(head2, tail2, 'O');
    InsertAtTail(head2, tail2, 'N');

    Node* word3 = new Node('O');
    Node* head3 = word3;
    Node* tail3 = word3;
    InsertAtTail(head3, tail3, 'K');
    InsertAtTail(head3, tail3, 'A');
    InsertAtTail(head3, tail3, 'Y');

    cout<<"checking for word1 LEVEL "<<endl;
    CheckPalindrome(head1,tail1);
    cout<<"checking for word2 NOON "<<endl;
    CheckPalindrome(head2,tail2);

    cout<<"checking for word3 OKAY  "<<endl;
    CheckPalindrome(head3,tail3);


    


}

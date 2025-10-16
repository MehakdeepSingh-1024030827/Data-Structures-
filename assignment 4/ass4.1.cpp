#include <iostream>
using namespace std;

class Queue
{
    int size;
    int *arr;
    int front;
    int rear;

public:
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = rear = 0;
    }
    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "queue is full" << endl;
        }
        else
        {
            arr[rear] = value;
            rear++;
        }
    }
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = rear = 0;
            }
        }
    }
    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if (rear == size)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            for (int i = front; i < rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    void peek()
    {
        if (isEmpty())
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            cout << "peek element is : " << arr[front] << endl;
        }
    }
};

int main()
{
    int N;
    cout << "enter size of the queue : ";
    cin >> N;
    int choice;
    Queue q1(N);
    int more = 1;
    while (more == 1)
    {
        cout << "queue created successfully ! " << endl;
        cout << "enter corresponding number for the desired operation you want to perform : " << endl;
        cout << "for ENQUEUE operation enter 1 : " << endl;
        cout << "for DEQUEUE operation enter 2 : " << endl;
        cout << "for PEEK operation enter 3 : " << endl;
        cout << "for DISPLAY operation enter 4 : " << endl;
        cout << "for CHECKING FULL operation enter 5 : " << endl;
        cout << "for CHECKING EMPTY operation enter 6 : " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "performing enqueue op" << endl;
            int element;
            cout << "enter element you want to insert : ";
            cin >> element;
            q1.enqueue(element);
            cout << "opertion performed ! " << endl;
            cout << "do more op ? ";
            cin >> more;

            break;

        case 2:
            cout << "dequeue op " << endl;
            cout << " before : ";
            q1.display();
            q1.dequeue();
            cout << "after : ";
            q1.display();
            cout << "do more op ? ";
            cin >> more;
            break;

        case 3:
            cout << "peek op " << endl;
            q1.peek();
            cout << "do more op ? ";
            cin >> more;
            break;

        case 4:
            cout << "display op" << endl;
            q1.display();
            cout << "do more op ? ";
            cin >> more;
            break;

        case 5:
            cout << "checking for FULL " << endl;
            if (q1.isFull())
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
            cout << "do more op ? ";
            cin >> more;
            break;

        case 6:
            cout << "checking for EMPTY " << endl;
            if (q1.isEmpty())
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
            cout << "do more op ? ";
            cin >> more;
            break;
        }
    }
}
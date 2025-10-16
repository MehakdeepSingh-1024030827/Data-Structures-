#include <iostream>
using namespace std;

class CircularQueue
{
    int size;
    int *arr;
    int front;
    int rear;

public:
    CircularQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = rear = -1;
    }

    bool isFull()
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        return false;
    }

    void enqueue(int ele)
    {
        if (isFull())
        {
            cout << "Queue is full!" << endl;
        }
        else
        {
       
            if (front == -1)
            {
                front = rear = 0;
                arr[rear] = ele;
            }
            else if (rear == size - 1 && front != 0)
            {
               
                rear = 0;
                arr[rear] = ele;
            }
            else
            {
                
                rear++;
                arr[rear] = ele;
            }
            cout << "Enqueued: " << ele << endl;
        }
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
        }
        else
        {
            int ans = arr[front];
            arr[front] = -1;

            
            if (front == rear)
            {
                front = rear = -1;
            }
            else if (front == size - 1)
            {
          
                front = 0;
            }
            else
            {
               
                front++;
            }
            cout << "Dequeued: " << ans << endl;
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
        }
        else
        {
            cout << "Queue elements: ";
            if (rear >= front)
            {
                
                for (int i = front; i <= rear; i++)
                {
                    cout << arr[i] << " ";
                }
            }
            else
            {
                
                for (int i = front; i < size; i++)
                {
                    cout << arr[i] << " ";
                }
                for (int i = 0; i <= rear; i++)
                {
                    cout << arr[i] << " ";
                }
            }
            cout << endl;
        }
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
        }
        else
        {
            cout << "Front element: " << arr[front] << endl;
        }
    }

    ~CircularQueue()
    {
        delete[] arr;
    }
};

int main()
{
    int size, choice, element;
    
    cout << "Enter the size of the circular queue: ";
    cin >> size;
    
    CircularQueue q(size);
    
    do
    {
        cout << " CIRCULAR QUEUE MENU" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Peek" << endl;
        cout << "5. Check if Empty" << endl;
        cout << "6. Check if Full" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice)
        {
        case 1:
            cout << "Enter element to enqueue: ";
            cin >> element;
            q.enqueue(element);
            break;
            
        case 2:
            q.dequeue();
            break;
            
        case 3:
            q.display();
            break;
            
        case 4:
            q.peek();
            break;
            
        case 5:
            if (q.isEmpty())
            {
                cout << "Queue is empty!" << endl;
            }
            else
            {
                cout << "Queue is not empty!" << endl;
            }
            break;
            
        case 6:
            if (q.isFull())
            {
                cout << "Queue is full!" << endl;
            }
            else
            {
                cout << "Queue is not full!" << endl;
            }
            break;
            
        case 0:
            cout << "Exiting" << endl;
            break;
        }
        
    } while (choice != 0);
    
    return 0;
}
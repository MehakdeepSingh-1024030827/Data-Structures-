#include<iostream>
using namespace std;

// Function to display the array
void display(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert an element at a given position
void insert_ele(int arr[], int &n, int ele, int pos) {
    if (pos < 1 || pos > n+1) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = ele;
    n++;
    cout << "Element inserted successfully!" << endl;
}

// Linear search function
int linear_search(int arr[], int n, int ele) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == ele) {
            return i;
        }
    }
    return -1;
}

// Function to delete element
void remove_ele(int arr[], int &n, int ele) {
    int index = linear_search(arr, n, ele);
    if (index == -1) {
        cout << "Element not found!" << endl;
        return;
    }
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "Element deleted successfully!" << endl;
}

// Function to modify element at a given position
void modify_ele(int arr[], int n, int pos, int new_val) {
    arr[pos - 1] = new_val;
    cout << "Element modified successfully!" << endl;
}

int main() {
    int n = 5;  
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;   
    }

    int choice, ele, pos, new_val;

    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Display array" << endl;
        cout << "2. Insert element" << endl;
        cout << "3. Delete element" << endl;
        cout << "4. Search element" << endl;
        cout << "5. Modify element" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                display(arr, n);
                break;

            case 2:
                cout << "Enter element to insert: ";
                cin >> ele;
                cout << "Enter position: ";
                cin >> pos;
                insert_ele(arr, n, ele, pos);
                break;

            case 3:
                cout << "Enter element to delete: ";
                cin >> ele;
                remove_ele(arr, n, ele);
                break;

            case 4:
                cout << "Enter element to search: ";
                cin >> ele;
                pos = linear_search(arr, n, ele);
                if (pos == -1) cout << "Element not found!" << endl;
                else cout << "Element found at position " << pos + 1 << endl;
                break;

            case 5:
                cout << "Enter position to modify: ";
                cin >> pos;
                cout << "Enter new value: ";
                cin >> new_val;
                modify_ele(arr, n, pos, new_val);
                break;

            case 6:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 6);

    return 0;
}

#include <iostream>
using namespace std;
class Stack {
public:
    static const int size = 10;
    int arr[size];
    int top;

    Stack() {
        top = -1;
    }

    void push(int ele) {
        if (isfull()) {
            cout << "Stack Overflow!" << endl;
        } else {
            top++;
            arr[top] = ele;
            cout << ele << " inserted at position: " << top << endl;
        }
    }

    void pop() {
        if (isempty()) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << arr[top] << " deleted from position: " << top << endl;
            top--;
        }
    }

    void display() {
        if (isempty()) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    bool isempty() {
        return top == -1;
    }

    bool isfull() {
        return top == size - 1;
    }
};

int main() {
    Stack s1;
    int ch;
    char ch1;
    int ele;

    cout << "STACK OPERATIONS:" << endl;
    do {
        cout << "Enter your choice:\n1. Push\n2. Pop\n3. Display\n";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter an element: ";
                cin >> ele;
                s1.push(ele);
                break;

            case 2:
                s1.pop();
                break;

            case 3:
                s1.display();
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

        cout << "Do you want to continue? (Y/y for yes): ";
        cin >> ch1;
    } while (ch1 == 'Y' || ch1 == 'y');

    return 0;
}

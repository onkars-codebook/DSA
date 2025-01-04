// Program for the impementation of stack using linked list
#include <iostream>
using namespace std;

class Stack {
public:
    int top;
    static const int size = 10;
    int STACK[size];

    Stack() {
        top = -1;
    }

    void push() {
        if (top == size - 1) {
            cout << "Stack Overflow!" << endl;
        } else {
            int ele;
            cout << "Enter an element to be inserted: ";
            cin >> ele;
            top++;
            STACK[top] = ele;
            cout << ele << " - Inserted at index: " << top << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
        } else {
            int temp = STACK[top];
            top--;
            cout << temp << " Popped out!" << endl;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << STACK[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Driver code
    int ch;
    char ch1;
    Stack c1;

    do {
        cout << "Select Operations:" << endl;
        cout << "1. Push \t 2. Pop \t 3. Display" << endl;
        cin >> ch;

        switch (ch) {
            case 1:
                c1.push();
                break;
            case 2:
                c1.pop();
                break;
            case 3:
                c1.display();
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> ch1;
    } while (ch1 == 'Y' || ch1 == 'y');

    return 0;
}

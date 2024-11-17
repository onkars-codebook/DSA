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
    
}

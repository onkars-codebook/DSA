#include <iostream>
#include <string>
using namespace std;

class Stack {
    int top;
    static const int size = 100;  // Increase size if needed
    char STACK[size];

public:
    Stack() : top(-1) {}  // Constructor initializes `top` to -1

    // Function to push an element to the stack
    void push(char ch) {
        if (top >= size - 1) {
            cout << "Stack overflow!" << endl;
        } else {
            STACK[++top] = ch;
        }
    }

    // Function to pop an element from the stack
    char pop() {
        if (top < 0) {
            cout << "Stack underflow!" << endl;
            return '\0';
        } else {
            return STACK[top--];
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Function to reverse the string using stack
    void printReversedString(const string& str) {
        // Push all characters of the string to the stack
        for (char ch : str) {
            push(ch);
        }
        
        cout << "Reversed string: ";
        while (!isEmpty()) {
            cout << pop();
        }
        cout << endl;
    }

    // Function to check if the given string is a palindrome
    bool isPalindrome(const string& str) {
        // Push all characters of the string to the stack
        for (char ch : str) {
            push(ch);
        }
        
        // Compare each character from the beginning of the string with the stack's top
        for (char ch : str) {
            if (ch != pop()) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Stack s;
    string str;
    
    cout << "Enter a string: ";
    cin >> str;

    cout << "Original string: " << str << endl;

    // Print reversed string
    s.printReversedString(str);

    // Check if the string is a palindrome
    if (s.isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}

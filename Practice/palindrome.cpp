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

#include<iostream>
using namespace std;

class LinkedList {
    // Define the node structure inside the class
    struct node {
        int data;
        node* next; // 'next' should be a pointer to 'node'
    };

    node* top = nullptr; // Initially, top is null (empty stack)

public:
    // Push function to add elements to the stack
    void push() {
        int data;
        node* newNode = new node(); // Dynamically create a new node
        cout << "Enter Data: ";
        cin >> data;
    
        newNode->data = data;       // Set the node's data
        newNode->next = top;        // Link the new node to the top

        top = newNode;              // Update the top pointer
    }

    // Pop function to remove elements from the stack
    void pop() {
        if (top == nullptr) {
            cout << "Underflow condition!" << endl;
            return;
        }

        node* temp = top;          // Temp points to the current top
        cout << temp->data << " Popped out!" << endl;

        top = top->next;           // Move the top pointer to the next node
        delete temp;               // Free the memory of the popped node
    }

    // Display function to show all elements in the stack
    void display() {
        node* temp = top;
        if (top == nullptr) {
            cout << "Empty!" << endl;
        } else {
            cout << "Stack contents: ";
            while (temp != nullptr) {
                cout << temp->data << " "; // Display each node's data
                temp = temp->next;         // Move to the next node
            }
            cout << endl;
        }
    }
};

int main() {
    LinkedList stack;  // Create an object of LinkedList

    stack.push();      // Push elements onto the stack
    stack.push();      // Push another element
    stack.push();      // Push another element


    stack.display();   // Display the current stack

    stack.pop();       // Pop an element from the stack
    stack.display();   // Display the stack after pop

    return 0;
}

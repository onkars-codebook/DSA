#include <iostream>  // For input and output operations

using namespace std; // Using the standard namespace

// Structure for defining a Node in a Binary Tree
struct Node {
    int data;         // Data stored in the node
    Node* left;       // Pointer to the left child node
    Node* right;      // Pointer to the right child node

    // Constructor to initialize a new node
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Function to create a new node in the Binary Tree
Node* newNode(int data) {
    return new Node(data); // Create and return a new Node with data
}

// Function to print the nodes of a Binary Tree in an In-Order traversal manner
void print_In_Order(Node* node) {
    if (node == nullptr) return;     // If the current node is NULL, exit the function

    print_In_Order(node->left);      // Recursively traverse the left subtree
    cout << node->data << " ";       // Print the data of the current node
    print_In_Order(node->right);     // Recursively traverse the right subtree
}

// Main function to demonstrate In-Order traversal of a Binary Tree
int main() {
    // Create a Binary Tree with some nodes
    Node* root = newNode(10);                // Root node with data 10
    root->left = newNode(20);                // Left child node of the root with data 20
    root->right = newNode(30);               // Right child node of the root with data 30
    root->left->left = newNode(40);          // Left child of node with data 20 with data 40
    root->left->right = newNode(50);         // Right child of node with data 20 with data 50

    cout << "Traversal of a binary tree: \n";
    print_In_Order(root);                    // Print the nodes of the Binary Tree in In-Order traversal

    // Cleaning up manually allocated nodes to avoid memory leaks
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;                                // Indicate successful completion of the program
}

#include <iostream>
using namespace std;

// Node class represents a single node in the binary tree
class Node {
public:
    int data;      // Value stored in the node
    Node* left;    // Pointer to the left child
    Node* right;   // Pointer to the right child

    // Constructor to initialize the node with data
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Function to create the binary tree
Node* createTree() {
    int data;
    cout << "Enter data (-1 for no node): ";
    cin >> data;

    // Base case: If the input is -1, return nullptr (no node)
    if (data == -1) return nullptr;

    // Create a new node with the input data
    Node* root = new Node(data);

    // Recursively create the left subtree
    cout << "Enter left for " << data << ": " << endl;
    root->left = createTree();

    // Recursively create the right subtree
    cout << "Enter right for " << data << ": " << endl;
    root->right = createTree();

    // Return the created node
    return root;
}

// Function for in-order traversal (Left -> Root -> Right)
void inOrder(Node* root) {
    if (root == nullptr) return; // Base case: If the node is null, return

    inOrder(root->left);        // Traverse the left subtree
    cout << root->data << " ";  // Visit the root node
    inOrder(root->right);       // Traverse the right subtree
}

// Function for pre-order traversal (Root -> Left -> Right)
void preOrder(Node* root) {
    if (root == nullptr) return; // Base case: If the node is null, return

    cout << root->data << " ";  // Visit the root node
    preOrder(root->left);       // Traverse the left subtree
    preOrder(root->right);      // Traverse the right subtree
}

// Function for post-order traversal (Left -> Right -> Root)
void postOrder(Node* root) {
    if (root == nullptr) return; // Base case: If the node is null, return

    postOrder(root->left);      // Traverse the left subtree
    postOrder(root->right);     // Traverse the right subtree
    cout << root->data << " ";  // Visit the root node
}

int main() {
    Node* root = nullptr; // Pointer to the root of the binary tree

    cout << "Create a tree:" << endl;

    // Create the binary tree using user input
    root = createTree();

    // Perform and display the in-order traversal
    cout << "\nIn-order Traversal: ";
    inOrder(root);
    cout << endl;

    // Perform and display the pre-order traversal
    cout << "Pre-order Traversal: ";
    preOrder(root);
    cout << endl;

    // Perform and display the post-order traversal
    cout << "Post-order Traversal: ";
    postOrder(root);
    cout << endl;

    return 0; // Exit the program
}

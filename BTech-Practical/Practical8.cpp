// Practical No 9 and 10
// Pr - 9 Create BST and display preorder, inorder and postorder of the tree
// Pr - 10 Store the final marks of students for subject ADS using BST and perform following operations. 1.Print marks in ascending order 2.Print min and max marks
#include<iostream>
using namespace std;
class Node{
    public :
    int data;
    Node* left;
    Node* right;
    Node(int ele)
    {
        data = ele;
        left = nullptr;
        right = nullptr;
    }
};

Node* insert(Node* root,int marks )
{
    if(root == nullptr)
    {
        return new Node(marks);
    }


    if(marks < root->data)
    {
        root->left = insert(root->left,marks);
    }
    else{
        root->right = insert(root->right,marks);
    }
}
// Function to perform in-order traversal (prints marks in ascending order)
void inorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    inorder(root->left);  // Traverse left subtree
    cout << root->data << " ";  // Print the current node's data
    inorder(root->right);  // Traverse right subtree
}

// Function to find the minimum marks (leftmost node)
Node* findMin(Node* root) {
    Node* current = root;    //orignal root pointer should not be changed so that its assigned to the current ptr;
    while (current && current->left != nullptr) {
        current = current->left;
    }
    return current;
}

// Function to find the maximum marks (rightmost node)
Node* findMax(Node* root) {
    Node* current = root;
    while (current && current->right != nullptr) {
        current = current->right;
    }
    return current;
}


int main()
{
     Node* root = nullptr;  // Initialize an empty BST

    // Insert marks for students into the BST
    int marks;
    char choice;

    do {
        cout << "Enter marks for a student: ";
        cin >> marks;

        // Insert the marks into the BST
        root = insert(root, marks);

        cout << "Do you want to enter more marks? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    // 1. Print marks in ascending order (In-order traversal)
    cout << "\nMarks in ascending order (In-order traversal): ";
    inorder(root);
    cout << endl;

    // 2. Print minimum marks
    Node* minNode = findMin(root);
    cout << "Minimum marks: " << minNode->data << endl;

    // 3. Print maximum marks
    Node* maxNode = findMax(root);
    cout << "Maximum marks: " << maxNode->data << endl;

    return 0;
}
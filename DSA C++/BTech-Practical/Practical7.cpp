// This program that simply defines the Implementation of the Trees and their traversal as well so why to stop lets start .
#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val)             //Initiallizes the values  to the tree.
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
 };
 
 Node* CreateTree()
 {
    int data;
    cout<<"Enter a data :(-1 indicates the null value )";
    cin>>data;

    if(data ==  -1)
    {
        return nullptr;
    }

    Node* root = new Node(data);
    
    cout <<"Enter the left child of "<<data<<":"<<endl;
    root->left = CreateTree();

    cout <<"Enter the right child of "<<data<<":"<<endl;
    root->right = CreateTree();
    
    return root;
 }

 void inorder(Node* root)
 {
    if(root == nullptr) 
    return; 
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
 }
 
 void preorder(Node* root)
 {
    if(root == nullptr) return;
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
 }

 void postorder(Node* root)
 {
    if(root == nullptr) 
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
 }

    // Helper function to check if a node is a leaf
    bool isLeaf(Node* node) {
    return (node != nullptr && node->left == nullptr && node->right == nullptr);
    }
    
    // Function to display the leaf nodes
    void displayLeafNodes(Node* root) {
        if (root == nullptr) return;
    
        // If the current node is a leaf, print it
        if (isLeaf(root)) {
            cout << root->data << " ";
        }
    
        // Traverse left and right subtrees
        displayLeafNodes(root->left);
        displayLeafNodes(root->right);
    }


int main()
{
Node* root = nullptr;

// create a root ;
root = CreateTree();
displayLeafNodes(root);
// preorder Traversal of the Tree

cout<<"Inorder Traversal :";
inorder(root);

cout<<"Preorder Traversal :";
preorder(root);

cout<<"postorder Traversal :";
postorder(root);

return 0;

}
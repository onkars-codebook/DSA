// Pr - 10 Store the final marks of students for subject ADS using BST and perform following operations. 1.Print marks in ascending order 2.Print min and max marks
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right=nullptr;
    }
};
// creating the function to create the tree.
Node* insert(Node* root,int marks){
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


int main(){
    return 0;
}
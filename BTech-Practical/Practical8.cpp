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
void createNode()
{
    int ele;

}

int main()
{
    return 0;
}
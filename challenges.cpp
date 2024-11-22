#include <iostream>
#include <stack>
#include <cctype>

using namespace std;

class Node {
public:
    char data;    //data
    Node* left;   //left pointer
    Node* right; //right pointer 
 
    Node(char val)  {
      data = val;  
      left = nullptr;
      right = nullptr;
    }
};

bool isOperator(char c) {   //function to find out the operator.
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

Node* constructExpressionTree(const string prefixExpression) {
    stack<Node*> stk;   //creating an stack.
//    e.g : +*abc 
// it will start from right to left so that we use the reverse for loop.
    for (int i = prefixExpression.size() - 1; i >= 0; i--) {
        char currentChar = prefixExpression[i];
         
        if (isalnum(currentChar))    //if the scanned character is a character .
        {
            stk.push(new Node(currentChar));
        } 
        else if (isOperator(currentChar)) //if the scanned character is a operator.
        {
            Node* operand1 = stk.top();  //operand 1 will be this 
            stk.pop();

            Node* operand2 = stk.top(); //and operand 2 will be this 
            stk.pop();

            Node* newNode = new Node(currentChar);
            newNode->left = operand1;
            newNode->right = operand2;

            stk.push(newNode);
        }
    }

    return stk.top();
}

void inorderTraversal(Node* root) {
    if (root) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

int main() {
    string prefixExpression;
    cout << "Enter the prefix expression: ";
    cin >> prefixExpression;

    Node* root = constructExpressionTree(prefixExpression);

    cout << "Inorder traversal: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}

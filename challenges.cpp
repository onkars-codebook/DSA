#include <iostream>
#include <stack>
#include <cctype>

using namespace std;

class TreeNode {
public:
    char data;
    TreeNode* left;
    TreeNode* right;
 
    TreeNode(char val)  {
      data = val;
      left = nullptr;
      right = nullptr;
    }
};

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

TreeNode* constructExpressionTree(const string prefixExpression) {
    stack<TreeNode*> stk;

    for (int i = prefixExpression.size() - 1; i >= 0; i--) {
        char currentChar = prefixExpression[i];

        if (isalnum(currentChar))    //if the scanned character is a character .
        {
            stk.push(new TreeNode(currentChar));
        } 
        else if (isOperator(currentChar)) //if the scanned character is a operator.
        {
            TreeNode* operand1 = stk.top();  //operand 1 will be this 
            stk.pop();

            TreeNode* operand2 = stk.top(); //and operand 2 will be this 
            stk.pop();

            TreeNode* newNode = new TreeNode(currentChar);
            newNode->left = operand1;
            newNode->right = operand2;

            stk.push(newNode);
        }
    }

    return stk.top();
}

void inorderTraversal(TreeNode* root) {
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

    TreeNode* root = constructExpressionTree(prefixExpression);

    cout << "Inorder traversal: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}

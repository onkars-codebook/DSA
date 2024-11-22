// Write C++ program with functions a) To print original string followed by reversed string using stack b) To check whether given string is palindrome or not
#include<iostream>
#include<string>
using namespace std;

class Stack {
    static const int size = 100; // Increased size for longer strings
    int count=0;
    char stack[size];
    int top;
    char rev_array[size];

public:
    Stack() {
        top = -1;
    }

    // Push an element onto the stack
    void push(char ele) {
        if (top == size - 1) {
            cout << "Stack Overflow!\n";
        } else {
            count++;
            stack[++top] = ele;
        }
    }

    // Pop an element from the stack
    char pop() {
        if (top == -1) {
            cout << "Stack Underflow!\n";
            return '\0'; // Return null char for underflow
        } else {
            count--;
            return stack[top--];
        }
    }
    void reverse()
    {
         int j=-1;
        cout<<"Reverse String:";
        for(int i=top;i>=0;i--)
        {
            j++;
            rev_array[j] = stack[i];
            cout<<stack[i];
        }
        cout<<"\nOriginal String:";
        for (int i = 0; i <= top; i++)
        {
            cout<<stack[i];
        }
    }
    void ispalindrome()
    {
    // Check element by element if they match
    bool palindrome = true;
    // cout<<count;
    for (int i = 0; i < count; i++)
    {
        if (stack[i] != rev_array[i])
        {
            palindrome = false;
            break;
        }
    }
    if(palindrome){
    cout<<"\nPalindrome !";
    }
    else{
        cout<<"\nNot a Palindrome ";
    }
    }
};
int main()
{
    Stack s1;
    s1.push('h');
    s1.push('e');
    s1.push('l');
    s1.push('e');
    s1.push('h');
    s1.reverse();
    s1.ispalindrome();


    // cout<<str;
    return 0;

}
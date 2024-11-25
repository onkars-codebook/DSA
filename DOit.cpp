#include<iostream>
using namespace std;
class Stack
{
    public:
    int top;
    static const int size = 10;
    int STACK[size];
    Stack()
    {
        top = -1; 
    }

    void push()
    {
        if(size == top - 1)
        {
            cout<<"Array Overflow !";
        }
        else{
            int ele;
            cout<<"Enter a element :"<<endl;
            cin>>ele;
            top++;
            STACK[top] = ele; 
            cout<<ele<<" Inseted at Index "<<top<<endl;
        }
    }
    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack Underflow"<<endl;
        }
        else{
            int temp;
            top--;
            temp = STACK[top];
            cout<<temp<<" Removed from the stack !"<<endl;
        }
    }
    void display()
    {
        int x = top;
        for(int i=0;i<=top;i++)
        {
            cout<<STACK[i]<<endl;
        }
    }
};
int main()
{
    Stack s1;
    s1.push();
  s1.push();
    s1.push();
      s1.push();
        s1.push();

    s1.pop();
    s1.pop();
    s1.display();
}
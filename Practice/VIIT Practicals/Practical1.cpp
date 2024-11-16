// Problem Statement : 1	Write a Program to Implement stack operations using array 
#include<iostream>
using namespace std;
class Stack {
    int top;
    static const int size=10;
    int STACK[size];
    Stack()
    {
        top = -1;
    }
    void push(){
        if(top == size-1){
            cout<<"Stack Overflow !";
        }
        else{
        int ele;
        cout<<"Enter a element to be insert :";
        cin>>ele;
        top++;
        STACK[top] = ele;
        cout<<ele+"- Inserted at index : "+top;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Array Underflow !";
        }
        else{
        int temp;
        temp = STACK[top];
        top--;
        cout<<temp<<"Popped out !";
        }
    }
    void display(){
        for(int i=0;i<= top;i++){
            cout<<STACK[i];
        }
    }
        
};
int main()
{
   
}
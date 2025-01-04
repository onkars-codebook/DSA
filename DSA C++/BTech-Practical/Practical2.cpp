// Implementation of the stack using linked list 
#include<iostream>
using namespace std;
class Queue{
   public:
   struct Node{
    // Defining the Queue
    Node* next;
    int data;
   };
   Node* top= nullptr;
   public:

   void push(){
    int ele;
    Node*  newnode = new Node();
    cout<<"Enter a Element :";
    cin>>ele;
    newnode->data = ele;
    newnode->next = top;
    top = newnode;
   }

    void pop()
    {
        int temp;
        if(top = nullptr){
            cout<<"Stack Underflow !";
        }
        else{
        temp = top->data;
        top = top->next;
        cout<<"Deleted element is :"<<temp;
        }
    }

    void display()
    {
        if(top == nullptr)
        {
            cout<<"No element in the Stack to display!";
        }
        else{
        Node* temp = top; 
        while (temp != nullptr)
        {
            cout<<temp->data<<endl;
            temp = temp->next;
        }
        }
        
    }
    
};
int main(){
    //Use switch case and do while loop to optomize more .
    Queue q1;
    q1.push();
    q1.push();
    q1.push();
    q1.display();
    q1.pop();
    q1.display();
}
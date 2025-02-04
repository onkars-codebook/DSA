// Implementation of the queue using an array 
#include<iostream>
using namespace std;
class Queue{
    int front,rear;
    static const int size = 10;
    int QUEUE[size];
    public:
    Queue(){
        front = 0;
        rear = -1;
    }
    void enqueue(){
        int ele;
        if (rear==size-1){
            cout <<"Queue overflow !";
        }
        else{ 
            cout<<"Enter a Element:";
            cin>>ele;
            rear++;
            QUEUE[rear] = ele;  
        }
    }
    void dequeue()
    {
        if(front == rear)
        {
            front = 0;
            rear = 0;
        } 
        int temp;
        temp = QUEUE[front];
        cout<<"Deleted element is :"<<temp;
        front++;
    }
    void display()
    {
        for(int i=front;i<=rear;i++)
        {
            cout <<QUEUE[i];
        }
    }
};
int main()
{
    int ch;
    char bo;
      Queue q1;
    cout<<"QUEUE OPERATIONS :";
    do{
      

        cout<<"1.ENQUEUE \t 2.DEQUEUE \t 3.DISPLAY";
        cin>>ch;
        switch(ch){
            case 1:
            q1.enqueue();
            break;

            case 2:
            q1.dequeue();
            break;
            
            case 3:
            q1.display();
            break;
            
            default :
            cout<<"Enter a valid choise!";
        }
        cout<<"Do You want to continue :";
        cin>>bo;
    }while(bo=='y'||bo=='y');
}

#include<iostream>
using namespace std;

class Queue {
public:
    int front = -1; //front pointer
    int rear = -1;  //rear pointer
    static const int size = 10;
    int QUEUE[size];

    void enqueue() {
        int ele;
        if (rear == size - 1) {
            cout << "Queue overflow!" << endl;
            return;
        }
        cout << "Enter element to be enqueued: ";
        cin >> ele;   //input

        if (front == -1) front = 0; // Set front to 0 on the first enqueue,beacause when we dequeue an element then its must point to index 1
        rear++;  
        QUEUE[rear] = ele;   //Storing ele in rear.
        cout << ele << " inserted at index " << rear << endl;
    }

    void dequeue() {
        if (front == -1 || front > rear) { // Queue is empty if front is beyond rear
            cout << "Queue is empty!" << endl;
            return;
        }
        int temp = QUEUE[front];    //for displaying
        cout << temp << " deleted!" << endl;
        front++;
        
        if (front > rear) { // Reset queue if empty,if we don't do this then queue will be treated f and r as deleted elements index.(behind space we cant use there)
            front = -1;
            rear = -1;
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << QUEUE[i] << " ";     //from front to rear
        }
        cout << endl;
    }
};

int main() {
    // Driver code
    Queue q1;
    q1.enqueue();
    q1.enqueue();
    q1.enqueue();
    q1.dequeue();
    q1.enqueue();
    q1.display();
}

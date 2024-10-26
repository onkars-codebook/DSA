#include<iostream>
using namespace std;

class Queue {
public:
    int front = -1;
    int rear = -1; // Start both as -1 to signify an empty queue
    static const int size = 10;
    int QUEUE[size];

    void enqueue() {
        int ele;
        if (rear == size - 1) {
            cout << "Queue overflow!" << endl;
            return;
        }
        cout << "Enter element to be enqueued: ";
        cin >> ele;

        if (front == -1) front = 0; // Set front to 0 on the first enqueue
        rear++;
        QUEUE[rear] = ele;
        cout << ele << " inserted at index " << rear << endl;
    }

    void dequeue() {
        if (front == -1 || front > rear) { // Queue is empty if front is beyond rear
            cout << "Queue is empty!" << endl;
            return;
        }
        int temp = QUEUE[front];
        cout << temp << " deleted!" << endl;
        front++;
        
        if (front > rear) { // Reset queue if empty
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
            cout << QUEUE[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q1;
    q1.enqueue();
    q1.enqueue();
    q1.enqueue();
    q1.dequeue();
    q1.enqueue();
    q1.display();
}

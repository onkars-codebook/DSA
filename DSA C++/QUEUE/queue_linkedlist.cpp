#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    // Enqueue operation to add an element to the rear of the queue
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (rear == nullptr) { // If queue is empty
            front = rear = newNode;
            cout << value << " enqueued to queue." << endl;
            return;
        }

        rear->next = newNode;
        rear = newNode;
        cout << value << " enqueued to queue." << endl;
    }

    // Dequeue operation to remove an element from the front of the queue
    void dequeue() {
        if (front == nullptr) { // If queue is empty
            cout << "Queue is empty. Nothing to dequeue." << endl;
            return;
        }

        Node* temp = front;
        front = front->next;

        // If the queue becomes empty after dequeue
        if (front == nullptr) {
            rear = nullptr;
        }

        cout << temp->data << " dequeued from queue." << endl;
        delete temp;
    }

    // Display the elements of the queue
    void display() {
        if (front == nullptr) {
            cout << "Queue is empty." << endl;
            return;
        }

        Node* temp = front;
        cout << "Queue elements: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Peek operation to get the front element without removing it
    int peek() {
        if (front == nullptr) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return front->data;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    cout << "Front element is " << q.peek() << endl;

    q.dequeue();
    q.display();

    q.enqueue(40);
    q.display();

    return 0;
}

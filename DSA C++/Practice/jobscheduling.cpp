// * Description:
//  * This program simulates job scheduling in an Operating System using the 
//  * First-Come, First-Served (FCFS) scheduling algorithm. The FCFS algorithm processes 
//  * jobs in the order they arrive, making it simple and easy to implement.
#include <iostream>  
#include <string>
using namespace std;

const int MAX = 10;

class JobQueue {
    int front, rear;
    string queue[MAX];  // Array to store job names/IDs

public:
    JobQueue() : front(-1), rear(-1) {}

    // Check if the queue is full
    bool isFull() {
        return (rear + 1) % MAX == front;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return front == -1;
    }

    // Insert a new job into the queue
    void insertJob(const string& jobName) {
        if (isFull()) {
            cout << "Queue overflow! No more jobs can be added." << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;  // Set front to 0 if inserting the first job
        }
        rear = (rear + 1) % MAX;
        queue[rear] = jobName;
        cout << "Inserted job: " << jobName << endl;
    }

    // Delete a job from the queue
    void deleteJob() {
        if (isEmpty()) {
            cout << "Queue underflow! No jobs to delete." << endl;
            return;
        }
        cout << "Deleted job: " << queue[front] << endl;
        if (front == rear) {
            // Reset queue if it becomes empty after deletion
            front = rear = -1;
        } else {
            front = (front + 1) % MAX;
        }
    }

    // Display all jobs in the queue
    void displayJobs() {
        if (isEmpty()) {
            cout << "No jobs in the queue." << endl;
            return;
        }
        cout << "Current jobs in the queue: ";
        int i = front;
        while (true) {
            cout << queue[i] << " ";
            if (i == rear) break;
            i = (i + 1) % MAX;
        }
        cout << endl;
    }
};
int main() {
    JobQueue jobQueue;
    int choice;
    string jobName;

    do {
        cout << "\n--- Job Scheduling Menu ---\n";
        cout << "1. Insert Job\n";
        cout << "2. Delete Job\n";
        cout << "3. Display Jobs\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter job name: ";
                cin >> jobName;
                jobQueue.insertJob(jobName);
                break;
            case 2:
                jobQueue.deleteJob();
                break;
            case 3:
                jobQueue.displayJobs();
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

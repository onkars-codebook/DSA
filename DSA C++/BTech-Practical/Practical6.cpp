//Simulate the job scheduling in the operating system as well as perform the operations such as insert update and delele the perocess the simulate the things.
#include <iostream>
#include <queue>
#include <string>
using namespace std;

// Structure to represent a Job
struct Job {
    int id;           // Job ID
    string name;      // Job Name
    int burstTime;    // Burst Time (time required for execution)
};

int main() {
    queue<Job> jobQueue; // Queue to hold the jobs
    int choice;
    int jobId = 1;       // Counter to auto-assign Job IDs

    do {
        cout << "\n--- Job Scheduling (FCFS) ---\n";
        cout << "1. Insert a Job\n";
        cout << "2. Delete (Serve a Job)\n";
        cout << "3. Display Job Queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            // Insert a Job
            Job newJob;
            newJob.id = jobId++;
            cout << "Enter Job Name: ";
            cin >> newJob.name;
            cout << "Enter Burst Time: ";
            cin >> newJob.burstTime;
            jobQueue.push(newJob);
            cout << "Job added successfully!\n";
            break;
        }
        case 2:
            // Delete (Serve a Job)
            if (jobQueue.empty()) {
                cout << "Queue is empty! No job to serve.\n";
            } else {
                Job servedJob = jobQueue.front();
                jobQueue.pop();
                cout << "Serving Job ID: " << servedJob.id 
                     << ", Name: " << servedJob.name 
                     << ", Burst Time: " << servedJob.burstTime << "\n";
            }
            break;

        case 3:
            // Display Job Queue
            if (jobQueue.empty()) {
                cout << "Queue is empty! No jobs available.\n";
            } else {
                cout << "Current Job Queue:\n";
                queue<Job> tempQueue = jobQueue; // Temporary queue to display
                while (!tempQueue.empty()) {
                    Job job = tempQueue.front();
                    tempQueue.pop();
                    cout << "Job ID: " << job.id 
                         << ", Name: " << job.name 
                         << ", Burst Time: " << job.burstTime << "\n";
                }
            }
            break;

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

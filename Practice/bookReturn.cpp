#include <iostream>
#include <queue>
#include <string>

using namespace std;

// Function to add a book to the queue
void addBook(queue<string>& bookQueue, const string& bookName) {
    bookQueue.push(bookName);
    cout << "Book \"" << bookName << "\" added to the return queue." << endl;
}

// Function to process the next book in the queue
void processBook(queue<string>& bookQueue) {
    if (!bookQueue.empty()) {
        string bookName = bookQueue.front(); // Get the book at the front
        bookQueue.pop(); // Remove the book from the queue
        cout << "Processing book: \"" << bookName << "\"" << endl;
    } else {
        cout << "No books in the queue to process." << endl;
    }
}

int main() {
    queue<string> bookQueue;

    // Add books to the queue
    addBook(bookQueue, "Data Structures and Algorithms");
    addBook(bookQueue, "Introduction to C++");
    addBook(bookQueue, "Artificial Intelligence Basics");

    cout << "\nProcessing books in the queue:\n";

    // Process books from the queue
    processBook(bookQueue);
    processBook(bookQueue);
    processBook(bookQueue);
    processBook(bookQueue); // Trying to process when the queue is empty

    return 0;
}

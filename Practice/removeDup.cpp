#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) {
        return n; // Array of length 0 or 1 is already unique
    }

    int j = 0; // j is the index of the last unique element

    // Traverse the array
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i]; // Move the next unique element
        }
    }
    
    return j + 1; // New length of the array with unique elements
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int newLength = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

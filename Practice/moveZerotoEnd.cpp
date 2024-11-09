#include <iostream>
using namespace std;

void moveZerosToEnd(int arr[], int n) {
    int j = 0; // j is the index for the next non-zero element
    // Traverse the array
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    // Fill remaining elements with zero
    while (j < n) {
        arr[j] = 0;
        j++;
    }
}

int main() {
    int arr[] = {0, 1, 9, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    moveZerosToEnd(arr, n);

    cout << "Array after moving zeros to the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

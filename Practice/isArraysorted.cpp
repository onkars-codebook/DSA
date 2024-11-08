#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false; // If any element is greater than the next, it's not sorted
        }
    }
    return true; // Array is sorted if no violations found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, n)) {
        cout << "The array is sorted in non-decreasing order." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}

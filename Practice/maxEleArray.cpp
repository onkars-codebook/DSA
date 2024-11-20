#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    int maxElement = arr[0]; // Assume the first element is the largest
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i]; // Update maxElement if a larger element is found
        }
    }
    return maxElement;
}

int main() {
    int arr[] = {1, 5, 3, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The maximum element in the array is: " << findMax(arr, n) << endl;

    return 0;
}

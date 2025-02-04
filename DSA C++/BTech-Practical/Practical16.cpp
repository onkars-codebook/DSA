// Write a program to convert number from decimal to binary using stack.
#include <iostream>
#include <stack>

using namespace std;

// Function to convert a decimal number to binary using a stack
string decimalToBinary(int number) {
    if (number == 0) {
        return "0";
    }

    stack<int> binaryStack; // Stack to store binary digits
    string binaryResult = "";

    // Divide the number by 2 and store remainders in the stack
    while (number > 0) {
        binaryStack.push(number % 2); // Push remainder onto the stack
        number = number / 2;                 // Update the number
    }

    // Pop the stack to form the binary result
    while (!binaryStack.empty()) {
        binaryResult += to_string(binaryStack.top()); // Append top of stack to result
        binaryStack.pop();                            // Remove top element
    }

    return binaryResult;
}

int main() {
    int decimalNumber;

    // Input a decimal number
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    // Convert to binary
    string binaryNumber = decimalToBinary(decimalNumber);

    // Display the result
    cout << "Binary representation of " << decimalNumber << " is: " << binaryNumber << endl;

    return 0;
}

#include <iostream>
using namespace std;
// Function to find the maximum among 3 numbers using pointers
int maximum(int *a, int *b, int *c) {
    int max = *a; // Assume first number as maximum
    if (*b > max) {
        max = *b; // If second number is greater, update maximum
    }
    if (*c > max) {
        max = *c; // If third number is greater, update maximum
    }
    return max;
}

int main() {
    int num1, num2, num3;

    // Accepting 3 integers
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    // Call the function to find the maximum
    int max = maximum(&num1, &num2, &num3);

    // Display the maximum
   cout << "Maximum of the three numbers is: " << max << endl;

    return 0;
}


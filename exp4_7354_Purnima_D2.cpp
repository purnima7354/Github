#include <iostream>
using namespace std;
class Number {
private:
    int decimalNumber;
    long long binaryNumber;

public:
    // Constructor to initialize data members
    Number(int decimal) {
        decimalNumber = decimal;
        binaryNumber = 0; // Initialize binary number
    }

    // Function to convert decimal to binary
    void convertToBinary() {
        long long tempDecimal = decimalNumber;
        long long base = 1;
        while (tempDecimal > 0) {
            int remainder = tempDecimal % 2;
            binaryNumber += remainder * base;
            tempDecimal /= 2;
            base *= 10;
        }
    }

    // Function to display binary number
    void displayBinary() {
        cout << "Binary equivalent: " << binaryNumber << std::endl;
    }
};

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    Number num(decimal); // Create Number object and initialize with decimal

    num.convertToBinary(); // Convert decimal to binary
    num.displayBinary();   // Display binary equivalent

    return 0;
}


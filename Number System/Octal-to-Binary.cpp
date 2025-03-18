#include <bits/stdc++.h>
using namespace std;

// Function to convert octal to binary
string octalToBinary(int octal) {
    // Array of binary equivalents for octal digits (0 to 7)
    string binaryMap[] = {"000", "001", "010", "011", "100", "101", "110", "111"};
    string binary = "";

    while (octal > 0) {
        int digit = octal % 10; // Extract last digit
        binary = binaryMap[digit] + binary; // Convert to 3-bit binary and append
        octal /= 10; // Remove last digit
    }

    return binary;
}

int main() {
    int octal;
    cout << "Enter an Octal Number: ";
    cin >> octal;

    cout << "Binary Number: " << octalToBinary(octal) << endl;

    return 0;
}

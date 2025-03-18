// Multiply each digit by 16ⁿ (n = position from right, starting at 0).

#include <bits/stdc++.h>
using namespace std;

int hexadecimalToDecimal(string hex) {
    int decimal = 0, power = 0;
    
    // Start from the rightmost digit and move left
    for (int i = hex.length() - 1; i >= 0; i--) {
        char digit = hex[i];
        int value;

        // Convert digit to decimal value (0-9 for '0'-'9', 10-15 for 'A'-'F')
        if (digit >= '0' && digit <= '9') {
            value = digit - '0';
        } else if (digit >= 'A' && digit <= 'F') {
            value = digit - 'A' + 10;
        } else if (digit >= 'a' && digit <= 'f') { // For lowercase input
            value = digit - 'a' + 10;
        } else {
            cout << "Invalid Hexadecimal Number!" << endl;
            return -1;
        }

        // Multiply by 16^power and add to decimal result
        decimal += value * pow(16, power);
        power++;
    }
    return decimal;
}

int main() {
    string hex;
    cout << "Enter a Hexadecimal Number: ";
    cin >> hex;

    int decimal = hexadecimalToDecimal(hex);
    if (decimal != -1) {
        cout << "Decimal Equivalent: " << decimal << endl;
    }

    return 0;
}

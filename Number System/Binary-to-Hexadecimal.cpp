// Multiply each digit by 2ⁿ, where n is the position from the right (starting at 0).

#include <bits/stdc++.h>
using namespace std;

// Function to convert binary to decimal
int binarytoDecimal(long long number) {
    int decimal = 0, power = 0;

    while (number > 0) {
        int lastDigit = number % 10;
        decimal += lastDigit * pow(2, power);
        power++;
        number /= 10;
    }
    return decimal;
}

// Function to convert binary to hexadecimal
string binaryToHexadecimal(long long binary) {
    int decimal = binarytoDecimal(binary); // Convert binary to decimal first
    string hex = "";
    char hexDigits[] = "0123456789ABCDEF";

    while (decimal > 0) {
        int remainder = decimal % 16;
        hex = hexDigits[remainder] + hex; // Append corresponding hex digit
        decimal /= 16;
    }

    return (hex == "") ? "0" : hex; // Return "0" if input was 0
}

int main() {
    long long number;
    cout << "Enter the Binary Number: ";
    cin >> number;

    cout << "Hexadecimal: " << binaryToHexadecimal(number) << endl;

    return 0; // Indicating successful execution
}

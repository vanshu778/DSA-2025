//Group 3-bits from right to left, then convert each group to octal.

#include <bits/stdc++.h>
using namespace std;

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

int binarytoOctal(long long number) {
    int decimal = binarytoDecimal(number); // Corrected function call
    int octal = 0, place = 1;

    while (decimal > 0) {
        int remainder = decimal % 8;
        octal += remainder * place;
        place *= 10;
        decimal /= 8;
    }
    return octal;
}

int main() {
    long long number;
    cout << "Enter the Binary Number: ";
    cin >> number;

    cout << "Octal: " << binarytoOctal(number) << endl;
    return 0;
}

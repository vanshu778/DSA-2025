// Convert each hex digit into 4-bit binary.

#include <bits/stdc++.h>
using namespace std;

string hexToBinary(string hex) {
    // Mapping of hexadecimal digits to 4-bit binary representation
    unordered_map<char, string> hexToBinMap = {
        {'0', "0000"}, {'1', "0001"}, {'2', "0010"}, {'3', "0011"},
        {'4', "0100"}, {'5', "0101"}, {'6', "0110"}, {'7', "0111"},
        {'8', "1000"}, {'9', "1001"}, {'A', "1010"}, {'B', "1011"},
        {'C', "1100"}, {'D', "1101"}, {'E', "1110"}, {'F', "1111"},
        {'a', "1010"}, {'b', "1011"}, {'c', "1100"}, {'d', "1101"},
        {'e', "1110"}, {'f', "1111"}  // Also supporting lowercase hex letters
    };

    string binary = "";
    for (char digit : hex) {
        if (hexToBinMap.find(digit) != hexToBinMap.end()) {
            binary += hexToBinMap[digit];  // Append corresponding binary value
        } else {
            cout << "Invalid Hexadecimal Number!" << endl;
            return "";
        }
    }

    return binary;
}

int main() {
    string hex;
    cout << "Enter a Hexadecimal Number: ";
    cin >> hex;

    string binary = hexToBinary(hex);
    if (!binary.empty()) {
        cout << "Binary Equivalent: " << binary << endl;
    }

    return 0;
}

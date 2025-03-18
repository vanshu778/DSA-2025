// Convert hex to binary (4-bit), then regroup into 3-bit for octal.
#include <bits/stdc++.h>
using namespace std;

// Step 1: Convert Hex to Binary
string hexToBinary(string hex) {
    unordered_map<char, string> hexToBinMap = {
        {'0', "0000"}, {'1', "0001"}, {'2', "0010"}, {'3', "0011"},
        {'4', "0100"}, {'5', "0101"}, {'6', "0110"}, {'7', "0111"},
        {'8', "1000"}, {'9', "1001"}, {'A', "1010"}, {'B', "1011"},
        {'C', "1100"}, {'D', "1101"}, {'E', "1110"}, {'F', "1111"},
        {'a', "1010"}, {'b', "1011"}, {'c', "1100"}, {'d', "1101"},
        {'e', "1110"}, {'f', "1111"} // Supports lowercase hex
    };

    string binary = "";
    for (char digit : hex) {
        if (hexToBinMap.find(digit) != hexToBinMap.end()) {
            binary += hexToBinMap[digit];
        } else {
            cout << "Invalid Hexadecimal Number!" << endl;
            return "";
        }
    }
    return binary;
}

// Step 2: Convert Binary to Octal
string binaryToOctal(string binary) {
    // Make binary length a multiple of 3 by padding with leading zeros
    while (binary.length() % 3 != 0) {
        binary = "0" + binary;
    }

    unordered_map<string, char> binToOctMap = {
        {"000", '0'}, {"001", '1'}, {"010", '2'}, {"011", '3'},
        {"100", '4'}, {"101", '5'}, {"110", '6'}, {"111", '7'}
    };

    string octal = "";
    for (size_t i = 0; i < binary.length(); i += 3) {
        string threeBits = binary.substr(i, 3);
        octal += binToOctMap[threeBits];
    }
    
    return octal;
}

int main() {
    string hex;
    cout << "Enter a Hexadecimal Number: ";
    cin >> hex;

    string binary = hexToBinary(hex);
    if (!binary.empty()) {
        string octal = binaryToOctal(binary);
        cout << "Octal Equivalent: " << octal << endl;
    }

    return 0;
}

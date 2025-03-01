#include <bits/stdc++.h>
using namespace std;

int expand(string s, int i, int j) {
    int count = 0;

    // Expand while it's a palindrome
    while (i >= 0 && j < s.length() && s[i] == s[j]) {
        count++;
        i--;
        j++;
    }
    return count;
}

int countSubstrings(string s) {
    int totalCount = 0;

    for (int center = 0; center < s.length(); center++) {
        // Count odd-length palindromes
        totalCount += expand(s, center, center);
        // Count even-length palindromes
        totalCount += expand(s, center, center + 1);
    }

    return totalCount;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int result = countSubstrings(s);
    cout << "Total palindromic substrings: " << result << endl;

    return 0;
}

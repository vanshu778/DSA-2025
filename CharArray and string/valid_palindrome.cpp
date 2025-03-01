// Approach: Two Pointer
// Step 01: When s[start] and s[end] are equal, then start++ and end--.
// Step 02: When s[start] and s[end] are different, then remove at most 1 character (s[start] or s[end]), then check if the remaining string is a palindrome.
// Step 03: Then return true or false.

#include<bits/stdc++.h>
using namespace std;

//palindromic function
bool checkPalindrome(string s, int start, int end){
    while(start<=end){
        if(s[start]==s[end]){
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;
}

//valid Palindrome
bool validPalindrome(string s){
    int N = s.length();
    int start = 0;
    int end = N-1;

    while(start<end){
        //step1
        if(s[start]==s[end]){
            start++;
            end--;
        }

        //step2
        else{
            //only one removal allowed
            //check palindrome for remaining string after removal

            //s[start] character ---> remove
            bool ans1=checkPalindrome(s,start+1,end);
            //s[end] character ---> remove
            bool ans2 = checkPalindrome(s,start,end-1);

            //step3
            return ans1 || ans2;
        }
    }
    return true;
}

int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    
    cout<<validPalindrome(s);
}
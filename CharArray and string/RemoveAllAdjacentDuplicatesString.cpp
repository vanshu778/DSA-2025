// Approach:
//  Step 01: create a temp string
//  Step 02: compare input string's element with right most element of temp string
//  When both elements are different then push element in temp
// When both elements are same then pop element from temp

#include<bits/stdc++.h>
using namespace std;
string removeDuplicates(string s){
    //step1: create temp string
    string temp = " ";
    int n=s.length();
    int i = 0;

    while(i<n){
        //step2: compare input string's element with right most element of temp string
        //when both elements are same then pop element from temp
        if(temp.length()>0 && s[i]==temp[temp.length()-1]){
            temp.pop_back();
        }
        //when both elements are different then push element in temp
        else{
            temp.push_back(s[i]);
        }
        i++;
    }
    return temp;
}

int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);

    cout<<removeDuplicates(s);

}
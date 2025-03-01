// Approach:
//  Step 01: find part from s and remove part till end of last iteration of s
//  Step 02: return s

#include<bits/stdc++.h>
using namespace std;

string removeOccurences(string s, string part){
    //step1: find part from s when part foound then erase it froms 
    while(s.find(part)!=string::npos){
        s.erase(s.find(part),part.length());
    }
    //step2: return s
    return s;
}

int main(){
    string s;
    string part;
    cout<<"Enter the string and part which removed:";
    getline(cin,s);
    getline(cin,part);

    cout<<removeOccurences(s,part);
}
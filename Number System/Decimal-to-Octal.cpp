// Divide the decimal number by 8, store the remainder.
// Continue dividing the quotient by 8 until you get 0.
// Read remainders in reverse order.

#include<bits/stdc++.h>
using namespace std;

void decimalToOctal(int number){
    vector<int>octal;

    while(number>0){
        octal.push_back(number%8);
        number/=8;
    }

    cout<<"Octal: ";
    for(int i = octal.size()-1;i>=0;i--){
        cout<<octal[i];
    }
    cout<<endl;
}

int main(){
    int number;
    cout<<"Enter the Decimal Number: ";
    cin>>number;

    decimalToOctal(number);
}
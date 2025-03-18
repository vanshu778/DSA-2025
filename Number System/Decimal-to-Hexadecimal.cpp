// Divide by 16 and use hexadecimal digits (A=10, B=11, ..., F=15), store the remainder.
// Continue dividing the quotient by 16 until you get 0.
// Read remainders in reverse order.

#include<bits/stdc++.h>
using namespace std;

void decimalToHexadecimal(int number){
    vector<char>hexadecimal;
;
    while(number>0){
        int remainder = number % 16;
        if (remainder < 10)
            hexadecimal.push_back(remainder + '0'); // Convert to character '0'-'9'
        else
            hexadecimal.push_back(remainder - 10 + 'A'); // Convert to 'A'-'F'
        number /= 16;
    }

    cout<<"Hexadecimal: ";
    for(int i = hexadecimal.size()-1;i>=0;i--){
        cout<<hexadecimal[i];
    }
    cout<<endl;
}

int main(){
    int number;
    cout<<"Enter the Decimal Number: ";
    cin>>number;

    decimalToHexadecimal(number);
}
// Divide the decimal number by 2, store the remainder.
// Continue dividing the quotient by 2 until you get 0.
// Read remainders in reverse order.

#include<bits/stdc++.h>
using namespace std;

void decimalToBinary(int number){
    vector<int>binary;

    while(number>0){
        binary.push_back(number%2);
        number/=2;
    }

    cout<<"Binary: ";
    for(int i = binary.size()-1;i>=0;i--){
        cout<<binary[i];
    }
    cout<<endl;
}

int main(){
    int number;
    cout<<"Enter the Decimal Number: ";
    cin>>number;

    decimalToBinary(number);
}
// Multiply each digit by 2ⁿ, where n is the position from the right (starting at 0).

#include<bits/stdc++.h>
using namespace std;

int binarytoDecimal(long long number){
    int decimal = 0, power = 0;

    while(number>0){
        int lastDigit = number%10;
        decimal+=lastDigit*pow(2,power);
        power++;
        number/=10;
    }
return decimal;
}

int main(){
    long long number;
    cout<<"Enter the Binary Number: ";
    cin>>number;

    cout<<binarytoDecimal(number);
}
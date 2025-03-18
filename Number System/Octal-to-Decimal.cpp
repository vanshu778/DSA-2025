//Multiply each digit by 8ⁿ (n = position from right, starting at 0).


#include<bits/stdc++.h>
using namespace std;

int octaltoDecimal(long long number){
    int decimal = 0, power = 0;

    while(number>0){
        int lastDigit = number%10;
        decimal+=lastDigit*pow(8,power);
        power++;
        number/=10;
    }
return decimal;
}

int main(){
    long long number;
    cout<<"Enter the  Number: ";
    cin>>number;

    cout<<octaltoDecimal(number);
}
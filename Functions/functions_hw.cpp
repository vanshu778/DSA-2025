#include<iostream>

using namespace std;

// Display area of circle
// float area(int r) {
//   float area_circle = 3.14 * r * r;
//   return area_circle;
// }
// int main() {
//   float r;
//   cin >> r;
//   float area_circle=area(r);
//   cout << "Area of Circle: " << area_circle;
// }

// given number is even or odd

// bool checkEven(int n){
//   if(/* n%2==0 */ (n & 1)==0){
//     return true;
//   }
//   else{
//     return false;
//   }
// }

// int main(){
//    int n;
//   cin>>n;
//   bool isEven= checkEven(n);

//   if(isEven){
//     cout<<n<<" is Even number \n";
//   }
//   else{
//     cout<<n<<" is Odd number \n";
//   }
// }

// check given number is prime or not
//  bool checkPrime(int n){
//    int i=2;
//    for(i=2;i<n;i++){
//      if(n%i==0){
//        return false;
//      }
//    }
//    return true;
//  }

// int main(){
//   int n;
//   cin>>n;
//   bool isPrime = checkPrime(n);
//   if(isPrime){
//     cout<<"Prime\n";
//   }
//   else{
//     cout<<"Not a prime\n";
//   }
// }

// print all prime from 1 to N
//  bool checkPrime(int n){
//    int i=2;
//    for(i=2;i<n;i++){
//      if(n%i==0){
//        return false;
//      }
//    }
//    return true;
//  }

// int main(){
//   int n;
//   cin>>n;
//   for(int i=2;i<=n;i++){
//     bool isIprime = checkPrime(i);
//     if(isIprime){
//       cout<<i<<" ";
//     }
//  }

//find factorial of number

// void factorial(int num){
//   int fact=1;
//   for(int i=num;i>0;i--){
//     fact*=i;
//   }
//   cout<<"Factorial of "<<fact;
// }

// int main(){
//   factorial(6);
//   return 0;
// }

//Convert celsius to fahrenheit.
// int conversion(float celsius){
//      return ((celsius * 9.0 / 5.0) + 32.0); 
// }

// int main(){
//     float celsius;
//     cin>>celsius;
//     cout<<conversion(celsius);
// }

// Convert distance in km to miles.
// int distance(float n){
//      return (n * 0.62137); 
// }

// int main(){
//     float n;
//     cin>>n;
//     cout<<distance(n);
// }

// set ith bit. (gfg)
// int setKthBit(int N, int K)
//     {
//         // Write Your Code here
//         int mask=1<<K;
//         int ans=N |mask;
//         return ans;
//     }

// Reverse an integer.(leetcode - 7)
// int reverse(int x) {
//         int ans=0;
//         while(x!=0){
//             int digit=x%10;
//             if((ans>INT_MAX/10) || (ans<INT_MIN/10)){
//                 return 0;
//             }
//             ans = (ans * 10)+digit;
//             x=x/10;
//         }
//         return ans;
//     }


// Print all prime number from 1 to N.
//  bool checkPrime(int n){
//    int i=2;
//    for(i=2;i<n;i++){
//      if(n%i==0){
//        return false;
//      }
//    }
//    return true;
//  }

// int main(){
//   int n;
//   cin>>n;
//   for(int i=2;i<=n;i++){
//     bool isIprime = checkPrime(i);
//     if(isIprime){
//       cout<<i<<" ";
//     }
//  }

#include <iostream>
using namespace std;

// void printName(){
//   int n;
//   cout<<"Enter the value of n:"<< endl;
//   cin>>n;

//   for(int i=0;i<n;i++){
//     cout<<"Vanshika"<<endl;
//   }
// }
// int main() {
// printName();
// void printNumber(int num){
//   cout<<num<<endl;
// }

// void printNumber(int num){
//   cout<<num<<endl;
// }

// int main() {
// int a=5;
// printNumber(a);
// }

// Add 2 numbers
// int add(int a, int b){
//   int result=a+b;
//   return result;
// }

// int main(){
//   int a,b;
//   cout<<"Enter the value of a:"<<endl;
//   cin>>a;

//   cout<<"Enter the value of b:"<<endl;
//   cin>>b;

//   int sum = add(a,b);
//   cout<<"Addition result is:"<<sum<<endl;

//   return 0;
// }

// print sum of 3 numbers
//  void sum(int a, int b, int c){
//    int result=a+b+c;
//    cout<<"Sum is "<<result<<endl;
//  }

// int main(){
//   sum(2,3,4);
//   return 0;
// }

//return sum of 3 numbers 
// int sum(int a, int b, int c){
//   int result = a+b+c;
//   return result;
// }

// int main(){
//   int finalResult=sum(2,3,4);
//   cout<<"Sum is "<<finalResult<<endl;
// }

// find max 3 numbers
//  int findmax(int a,int b, int c){
//    if(a>b && a>c){
//      return a;
//    }
//    else if(b>a && b>c){
//      return b;
//    }
//    else{
//      return c;
//    }
//  }
//  int main(){
//    int a,b,c;
//  cin >> a >> b >> c;
//    int maxNumber=findmax(a,b,c);
//    cout<<maxNumber<<endl;
//  }

// counting 1 to N

// void printCounting(int n){
//   for(int i=1;i<=n;i++){
//     cout<<i<<" ";
//   }
//   cout<<endl;
// }
// int main(){
//   int n;
//   cout<<"Enter the value n:"<<endl;
//   cin>>n;

//   printCounting(n);
// }

// function of Students and Grade problem
//  char getgrade(int marks){
//    if(marks>=90)
//      return 'A';
//    else if(marks>=80)
//      return 'B';
//    else if(marks>=70)
//      return 'C';
//    else if(marks>=60)
//      return 'D';
//    else
//      return 'F';
//  }
//  int main(){
//    int marks;
//    cout<<"Enter the marks:"<<endl;
//    cin>>marks;

//   char finalGrade=getgrade(marks);
//   cout<<finalGrade<<endl;
// }

// Sum upto N

// int getSum(int n){
//   int sum = 0;
//   for(int i=0;i<=n;i++){
//     sum=sum+i;
//   }
//   return sum;
// }
// int main(){
//   int n;
//   cout<<"Enter the value of n:"<<endl;
//   cin>>n;

//   int ans=getSum(n);
//   cout<<"Sum upto "<<n<<"is "<<ans<<endl;
//   return 0;
// }

// Sum of Even number upto N
// int getEvenSum(int n){
//   int sum = 0;
//   for(int i=2;i<=n;i+=2){
//     sum=sum+i;
//   }
//   return sum;
// }
// int main(){
//   int n;
//   cout<<"Enter the value of n:"<<endl;
//   cin>>n;

//   int ans=getEvenSum(n);
//   cout<<"Sum upto "<<n<<"is "<<ans<<endl;
//   return 0;
// }

// ## #Function Call Stack in C++

//     The function call stack,
//     also known as the call stack,
//     is a special type of data structure that stores information about the active subroutines or
//     functions in a computer program.When a function is called,
//     an activation record(also known as a stack frame) is pushed onto the call stack,
//     which includes information like the return address, parameters,
//     and local variables.When the function returns,
//     its activation record is popped off the stack.

//     Example and Explanation

//     Let's take an example where we have multiple function calls to understand how the function call stack works.

// #include <iostream>
// using namespace std;

// void functionC() { cout << "Inside functionC" << endl; }

// void functionB() {
//   cout << "Inside functionB" << endl;
//   functionC();
// }

// void functionA() {
//   cout << "Inside functionA" << endl;
//   functionB();
// }

// int main() {
//   cout << "Inside main" << endl;
//   functionA();
//   return 0;
// }

// Step-by-Step Function Call Stack

// 1. `main` Function Call:
//    - The program starts executing from the `main` function.
//    - The stack frame for `main` is pushed onto the stack.


//     | main        |
//     |-------------|


// 2. Calling `functionA` from `main`:
//    - Inside `main`, `functionA` is called.
//    - The stack frame for `functionA` is pushed onto the stack.


//     | functionA   |
//     |-------------|
//     | main        |
//     |-------------|


// 3. Calling `functionB` from `functionA`:
//    - Inside `functionA`, `functionB` is called.
//    - The stack frame for `functionB` is pushed onto the stack.


//     | functionB   |
//     |-------------|
//     | functionA   |
//     |-------------|
//     | main        |
//     |-------------|


// 4. Calling `functionC` from `functionB`:
//    - Inside `functionB`, `functionC` is called.
//    - The stack frame for `functionC` is pushed onto the stack.


//     | functionC   |
//     |-------------|
//     | functionB   |
//     |-------------|
//     | functionA   |
//     |-------------|
//     | main        |
//     |-------------|


// 5. Returning from `functionC`:
//    - `functionC` completes execution and returns to `functionB`.
//    - The stack frame for `functionC` is popped off the stack.


//     | functionB   |
//     |-------------|
//     | functionA   |
//     |-------------|
//     | main        |
//     |-------------|


// 6. Returning from `functionB`:
//    - `functionB` completes execution and returns to `functionA`.
//    - The stack frame for `functionB` is popped off the stack.


//     | functionA   |
//     |-------------|
//     | main        |
//     |-------------|


// 7. Returning from `functionA`:
//    - `functionA` completes execution and returns to `main`.
//    - The stack frame for `functionA` is popped off the stack.


//     | main        |
//     |-------------|


// 8. Returning from `main`:
//    - `main` completes execution and the program terminates.
//    - The stack frame for `main` is popped off the stack.


// Full Code with Comments

// #include <iostream>
// using namespace std;

// void functionC() { cout << "Inside functionC" << endl; }

// void functionB() {
//   cout << "Inside functionB" << endl;
//   functionC(); // Call to functionC, stack frame for functionC is pushed
// }

// void functionA() {
//   cout << "Inside functionA" << endl;
//   functionB(); // Call to functionB, stack frame for functionB is pushed
// }

// int main() {
//   cout << "Inside main" << endl;
//   functionA(); // Call to functionA, stack frame for functionA is pushed
//   return 0;    // Return from main, stack frame for main is popped
// }

// Explanation of the Code

// - The `main` function starts execution, printing "Inside main".
// - `functionA` is called from `main`, pushing its stack frame onto the stack.
// - Inside `functionA`, `functionB` is called, pushing its stack frame onto the stack.
// - Inside `functionB`, `functionC` is called, pushing its stack frame onto the stack.
// - `functionC` executes and returns to `functionB`, popping its stack frame.
// - `functionB` completes and returns to `functionA`, popping its stack frame.
// - `functionA` completes and returns to `main`, popping its stack frame.
// - `main` completes and the program ends, with the final stack frame for `main` being popped.

// This illustrates how the function call stack manages the sequence of function calls and returns in a C++ program.
#include <iostream>
using namespace std;


//with function 

// bool find(int arr[],int size,int key){
//   for(int i=0;i<size;i++){
//     if(arr[i]==key)
//       return true;
//   }
//   return false;
// }

// int main() {
//   int arr[5]={1,3,5,7,9};
//   int size=5;

//   cout<<"Enter the key to find"<<endl;
//   int key;
//   cin>>key;

//   if(find(arr,size,key)){
//     cout<<"Found"<<endl;
//   }
//   else{
//     cout<<"Not Found"<<endl;
//   }
//   return 0;
// }


//without function 

// int main()
// {
// int arr[]={1,2,3,4,5,6,7,8,9};
// int size=8;

// int key=6;
// bool flag=0;
// //0-> not found
// //1->found
  
// for(int i=0;i<size;i++){
//   if(arr[i]==key){
//     flag=1;
//     break;
//   }
// }

// if(flag)
//   cout<<"Present"<<endl;
// else
//   cout<<"Absent"<<endl;
// }


// Time Complexity Analysis:

// 1. Best Case:
// Scenario: The key is found at the very first index of the array.
// Operations Performed: Only one comparison is required to find the key.
// Time Complexity:𝑂(1)
// This is the fastest scenario and requires constant time.

// 2. Worst Case:
// Scenario:
// The key is at the last position of the array, or
// The key is not present, requiring all elements to be checked.
// Operations Performed: The loop iterates through all size elements in the array.
// Time Complexity:O(n)
// where n is the size of the array.

// 3. Average Case:
// Scenario: The key is equally likely to be found at any position in the array.
// Operations Performed: On average, the algorithm checks half the elements before finding the key or confirming its absence. This results in approximately n/2 iterations.
// Time Complexity: O(n)
// Even though fewer iterations occur on average, the growth rate is still linear, so the time complexity remains  O(n).

// Space Complexity Analysis:
// Auxiliary Space Used: The function does not use additional memory apart from a few variables (arr, size, and key).
// Space Complexity: O(1)
// This is constant, as no extra space is required for the algorithm.

#include <iostream>
#include<vector>
using namespace std;

int main() {

  int arr[] = {1,3,5,7,9};
  int size_a=5;
  int brr[]={2,4,6,8};
  int size_b=4;

  vector<int>ans;

  for(int i=0;i<size_a;i++){
    ans.push_back(arr[i]);
  }

  for(int i=0;i<size_b;i++){
    ans.push_back(brr[i]);
  }

  cout<<"Printing ans array"<<endl;
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }

}

/*
Array Declarations:

int arr[] = {1, 3, 5, 7, 9};
int size_a = 5;
int brr[] = {2, 4, 6, 8};
int size_b = 4;
Here, two arrays arr and brr are declared and initialized.
arr has 5 elements: {1, 3, 5, 7, 9}.
brr has 4 elements: {2, 4, 6, 8}.
size_a and size_b store the sizes of arr and brr, respectively.
Vector Declaration:


vector<int> ans;
A vector ans of type int is declared. This will be used to store the merged elements of arr and brr.
First Loop - Copy Elements of arr to ans:


for(int i = 0; i < size_a; i++) {
  ans.push_back(arr[i]);
}
This loop iterates over each element of arr.
For each element in arr, the push_back method is used to append the element to the ans vector.
Example:

Initially, ans is empty: [].
After the first iteration (i=0), ans becomes: [1].
After the second iteration (i=1), ans becomes: [1, 3].
After the third iteration (i=2), ans becomes: [1, 3, 5].
After the fourth iteration (i=3), ans becomes: [1, 3, 5, 7].
After the fifth iteration (i=4), ans becomes: [1, 3, 5, 7, 9].
Second Loop - Copy Elements of brr to ans:


for(int i = 0; i < size_b; i++) {
  ans.push_back(brr[i]);
}
This loop iterates over each element of brr.
For each element in brr, the push_back method is used to append the element to the ans vector.
Example:

Initially, ans contains: [1, 3, 5, 7, 9].
After the first iteration (i=0), ans becomes: [1, 3, 5, 7, 9, 2].
After the second iteration (i=1), ans becomes: [1, 3, 5, 7, 9, 2, 4].
After the third iteration (i=2), ans becomes: [1, 3, 5, 7, 9, 2, 4, 6].
After the fourth iteration (i=3), ans becomes: [1, 3, 5, 7, 9, 2, 4, 6, 8].
Print the Merged Vector:


cout << "Printing ans array" << endl;
for(int i = 0; i < ans.size(); i++) {
  cout << ans[i] << " ";
}
This code prints the elements of the ans vector.

It uses a loop to iterate over each element in ans and prints them separated by spaces.
Example Output:
Printing ans array
1 3 5 7 9 2 4 6 8 
*/
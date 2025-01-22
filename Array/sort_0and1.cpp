#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr{0, 1, 0, 1, 1, 0, 1, 0, 1, 1};
  int start = 0;
  int end = arr.size() - 1;
  int i = 0;

  while (i != end) {
    if (arr[i] == 0) {
      swap(arr[start], arr[i]);
      start++;
      i++;
    } else {
      swap(arr[end], arr[i]);
      end--;
    }
  }

  for (auto val : arr) {
    cout << val << " ";

//detail understanding solution

    // void printArray(vector<int>arr){
    // for(auto i:arr){
    //   cout<<i<<" ";
    // }
    //   cout<<endl;
    // }

    // int main() {
    //   vector<int>arr{0,1,0,1,1,0,1,0,1,1};
    //   int start = 0;
    //   int end = arr.size()-1;
    //   int i=0;

    //   while(i!=end){
    //     cout<<"for i="<<i<<"start= "<<start<<"end= "<<end<<endl;
    //     if(arr[i]==0){
    //       cout<<"found zero"<<endl;
    //       cout<<"before swap";
    //       printArray(arr);
    //       swap(arr[start],arr[i]);
    //       start++;
    //       i++;
    //       cout<<"now i="<<i<<" start="<<start<<" end="<<end<<endl;
    //     }
    //     else{
    //       cout<<"found one"<<endl;
    //       cout<<"before swap";
    //       printArray(arr);
    //       swap(arr[end],arr[i]);
    //       end--;
    //     }
    //   }
  }
}

/*
1. Initialization:

  vector<int> arr{0, 1, 0, 1, 1, 0, 1, 0, 1, 1}; // Initialize an array with 0s and 1s.
  int start = 0; // Initialize the index for the beginning of the array.
  int end = arr.size() - 1; // Initialize the index for the end of the array.
  int i = 0; // Initialize the index for the current element.
2. The while Loop:

The code uses a while loop to iterate through the array until i reaches end. The loop continues as long as the current index (i) is not equal to the index of the end (end).

  while (i != end) {
    // Logic within the loop
  }
3. Checking for Zeros:

Inside the loop, the code checks if the current element at index i is equal to 0.

    if (arr[i] == 0) {
      // Handle zero element
    } else {
      // Handle one element
    }
4. Swapping for Zero Elements:

If the current element is 0:

It swaps the current element with the element at the start index.
start index is incremented to point to the next element in the array.
i index is incremented to move on to the next element.
      swap(arr[start], arr[i]); 
      start++;
      i++;
5. Swapping for One Elements:

If the current element is 1:

It swaps the current element with the element at the end index.
end index is decremented to point to the previous element in the array.
      swap(arr[end], arr[i]);
      end--;
Example:

Let's walk through the example array: arr{0, 1, 0, 1, 1, 0, 1, 0, 1, 1}

Initial State:

start = 0
end = 9
i = 0
arr = {0, 1, 0, 1, 1, 0, 1, 0, 1, 1}
Iteration 1:

arr[i] (i.e., arr[0]) is 0.
Swap arr[0] with arr[0].
start becomes 1.
i becomes 1.
start = 1
end = 9
i = 1
arr = {0, 1, 0, 1, 1, 0, 1, 0, 1, 1}
Iteration 2:

arr[i] (i.e., arr[1]) is 1.
Swap arr[1] with arr[9].
end becomes 8.
start = 1
end = 8
i = 1
arr = {0, 1, 0, 1, 1, 0, 1, 0, 1, 0}
Iteration 3:

arr[i] (i.e., arr[1]) is 0.
Swap arr[1] with arr[1].
start becomes 2.
i becomes 2.
start = 2
end = 8
i = 2
arr = {0, 0, 1, 1, 1, 0, 1, 0, 1, 0}
Continuing this process, the loop eventually terminates when i becomes equal to end. After the loop finishes, the array will be sorted with all the zeros at the beginning and all the ones at the end.

The for Loop:

Finally, the code uses a for loop to iterate through the sorted array and print its elements.

  for (auto val : arr) {
    cout << val << " ";
  }
Output:

After the code executes, the output will be:

0 0 0 0 0 1 1 1 1 1
*/
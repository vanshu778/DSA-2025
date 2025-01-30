#include <iostream>
#include <vector>
using namespace std;

// Function to find the pivot index in a rotated sorted array
int findPivot(vector<int> arr)
{
  int start = 0;
  int end = arr.size() - 1;
  int mid = start + (end - start) / 2;

  while (start <= end)
  {
    if (start == end)
    {               // If start and end meet, pivot is found
      return start; // Return pivot index
    }

    // Check if mid is the pivot element
    if (mid <= end && arr[mid] > arr[mid + 1])
      return mid; // If mid is greater than next element, mid is pivot

    // Check if mid-1 is the pivot element
    if (mid - 1 >= start && arr[mid - 1] > arr[mid])
      return mid - 1; // If mid-1 is greater than mid, mid-1 is pivot

    // If left half is unsorted, pivot must be in the left half
    if (arr[start] > arr[mid])
      end = mid - 1; // Move end to mid - 1
    else
      start = mid + 1; // Otherwise, pivot must be in the right half

    mid = start + (end - start) / 2; // Recalculate mid for the next iteration
  }
  return -1; // Return -1 if no pivot is found (not a rotated array)
}

int main()
{

  // vector<int> arr{8, 9, 10, 2, 4, 6};
  // vector<int> arr{6,8, 9, 10, 2, 4};
  vector<int> arr{4, 6, 8, 9, 10, 2}; // Another rotated sorted array

  int ans = findPivot(arr);
  if (ans == -1)
  {
    cout << "No pivot element" << endl; 
  }
  else
  {
    cout << "Ans is at index " << ans << endl;     
    cout << "Value of ans is " << arr[ans] << endl;
  }
  return 0;
}

#include <iostream>
using namespace std;
int main() {
  int arr[] = {0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1};
  int size = 15;

  int numzero = 0;
  int numone = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] == 0) {
      numzero++;
    }
    if (arr[i] == 1) {
      numone++;
    }
  }
  cout << "number of zeros: " << numzero << endl;
  cout << "number of ones: " << numone << endl;
}


// Time Complexity Analysis:

// 1. Number of Iterations:
// The for loop iterates through all size elements of the array exactly once.
// Each iteration involves:
// Two conditional checks (if statements): arr[i] == 0 and arr[i] == 1.
// Increment operations when conditions are met.

// 2. Best Case:
// Scenario: There is no difference in execution time based on the distribution of zeros and ones.
// Even if the array contains only zeros or only ones, all elements are processed, and both conditions are checked for every element.
// Time Complexity: O(n)
// where n is the size of the array.

// 3. Worst Case:
// Scenario: Same as the best case since all elements are processed regardless of their values.
// The two conditional checks (arr[i] == 0 and arr[i] == 1) are performed on every iteration.
// Time Complexity: O(n)

// 4. Average Case:
// The behavior remains the same as the best and worst cases since the algorithm always iterates over the entire array.
// Time Complexity: O(n)

// Space Complexity Analysis:

// 1. Auxiliary Space:
// The code uses a constant amount of extra space:
// Two integer variables (numzero and numone) to store counts.
// Loop counter variable (i).
// No additional memory is allocated based on the size of the array.
// Space Complexity: O(1)

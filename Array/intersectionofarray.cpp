 #include <iostream>
#include<vector>
using namespace std;

int main() {

 vector<int>arr{1,2,3,3,4,6,8};
  vector<int>brr{3,4,10};

  vector<int>ans;
  for(int i=0;i<arr.size();i++){
    int element = arr[i];

    for(int j=0;j<brr.size();j++){
      if(element == brr[j]){
        brr[j] = -1;
        ans.push_back(element);
      }
    }
  }

  for(auto value:ans){
    cout<<value<<" ";
  }
}


// ### Inputs:
// ```cpp
// vector<int> arr{1, 2, 3, 3, 4, 6, 8};
// vector<int> brr{3, 4, 10};
// ```

// ### Variables:
// - `arr = {1, 2, 3, 3, 4, 6, 8}`
// - `brr = {3, 4, 10}`
// - `ans = {}` (Initially empty)
// - `element` is the current element from `arr` being checked.

// ---

// ### Code Execution:

// #### **1st Iteration:**
// - `i = 0`, `element = arr[0] = 1`.
// - Inner loop checks if `1` is in `brr`:
//   - `brr[0] = 3` → No match.
//   - `brr[1] = 4` → No match.
//   - `brr[2] = 10` → No match.
// - `1` is not added to `ans`. `ans = {}`.

// #### **2nd Iteration:**
// - `i = 1`, `element = arr[1] = 2`.
// - Inner loop checks if `2` is in `brr`:
//   - `brr[0] = 3` → No match.
//   - `brr[1] = 4` → No match.
//   - `brr[2] = 10` → No match.
// - `2` is not added to `ans`. `ans = {}`.

// #### **3rd Iteration:**
// - `i = 2`, `element = arr[2] = 3`.
// - Inner loop checks if `3` is in `brr`:
//   - `brr[0] = 3` → Match found.
//   - `brr[0] = -1` (updated) to mark it as matched.
//   - `ans.push_back(3)` → `ans = {3}`.
// - `arr[2]` is added to `ans` and `brr[0]` is marked as `-1`.

// #### **4th Iteration:**
// - `i = 3`, `element = arr[3] = 3`.
// - Inner loop checks if `3` is in `brr`:
//   - `brr[0] = -1` → No match (because it was updated).
//   - `brr[1] = 4` → No match.
//   - `brr[2] = 10` → No match.
// - `3` is not added to `ans` because it was already found earlier. `ans = {3}`.

// #### **5th Iteration:**
// - `i = 4`, `element = arr[4] = 4`.
// - Inner loop checks if `4` is in `brr`:
//   - `brr[0] = -1` → No match.
//   - `brr[1] = 4` → Match found.
//   - `brr[1] = -1` (updated) to mark it as matched.
//   - `ans.push_back(4)` → `ans = {3, 4}`.
// - `arr[4]` is added to `ans` and `brr[1]` is marked as `-1`.

// #### **6th Iteration:**
// - `i = 5`, `element = arr[5] = 6`.
// - Inner loop checks if `6` is in `brr`:
//   - `brr[0] = -1` → No match.
//   - `brr[1] = -1` → No match.
//   - `brr[2] = 10` → No match.
// - `6` is not added to `ans`. `ans = {3, 4}`.

// #### **7th Iteration:**
// - `i = 6`, `element = arr[6] = 8`.
// - Inner loop checks if `8` is in `brr`:
//   - `brr[0] = -1` → No match.
//   - `brr[1] = -1` → No match.
//   - `brr[2] = 10` → No match.
// - `8` is not added to `ans`. `ans = {3, 4}`.

// ---

// ### Final Output:
// After the loops, the contents of `ans` are `{3, 4}`.

// ### Output:
// ```
// 3 4
// ```

// ### Summary:
// - The program correctly identifies the common elements between `arr` and `brr` and stores them in `ans`.
// - When an element from `arr` matches an element from `brr`, that element is added to `ans`, and the matching element in `brr` is marked as `-1` to avoid future matches.
// - The program avoids adding duplicate common elements from `arr` by marking elements in `brr` after they've been matched.
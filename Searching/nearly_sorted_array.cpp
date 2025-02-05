#include<iostream> 
#include<vector>   
using namespace std;

int nearlysorted(vector<int> arr, int target) { 

    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2; 
    // Calculate the mid index to avoid overflow

    while (start <= end) { 
        // Continue searching while the search space is valid
        
        if (arr[mid] == target) 
            return mid; 
        // If the middle element matches the target, return its index

        if (mid - 1 >= start && arr[mid - 1] == target) 
            return mid - 1; 
        // Check the left neighbor (if in bounds) for the target

        if (mid + 1 <= end && arr[mid + 1] == target) 
            return mid + 1; 
        // Check the right neighbor (if in bounds) for the target

        if (target > arr[mid]) { 
            // If the target is greater than the middle element
            start = mid + 2; 
            // Adjust the search space to the right, skipping the checked neighbor
        } else { 
            // If the target is smaller than the middle element
            end = mid - 2; 
            // Adjust the search space to the left, skipping the checked neighbor
        }

        mid = start + (end - start) / 2; 
        // Recalculate the mid index after modifying the search space
    }

    return -1; 
    // If the loop ends, the target is not in the array
}

int main() {
    vector<int> arr{10, 3, -1, 20, 50, 80, 70}; 
    int target = -1; 

    int ans = nearlysorted(arr, target); 
    cout << "Index of " << target << " is " << ans << endl; 
}

#include <iostream>  
#include <vector>   
using namespace std; 

int solve(vector<int> arr) {
    int s = 0;                          
    int e = arr.size() - 1;             
    int mid = s + (e - s) / 2;          

    while (s <= e) {                    
        if (s == e) {                   // Base case: If start and end meet, unique element found
            return s;                    // Return the index of the unique element
        }

        if (mid % 2 == 0) {              // If mid index is even
            if (arr[mid] == arr[mid + 1]) { // If mid element matches its next element
                s = mid + 2;             // Move start to mid+2 (skip the duplicate pair)
            } else {                     
                e = mid;                 // Otherwise, move end to mid (unique element is on left)
            }
        } else {                         // If mid index is odd
            if (arr[mid] == arr[mid - 1]) { // If mid element matches its previous element
                s = mid + 1;             // Move start to mid+1 (skip the duplicate pair)
            } else {                     
                e = mid - 1;             // Otherwise, move end to mid-1 (unique element is on left)
            }
        }
        mid = s + (e - s) / 2;           // 
    }
    return -1;                           // Return -1 if no unique element is found (shouldn't happen in valid input)
}

int main() {
    vector<int> arr{1,1,2,2,3,3,4,4,3,600,600,4,4}; 
    int ans = solve(arr);                
    cout << "ans is " << ans << endl;
    cout << "value is " << arr[ans] << endl; 
    return 0;                            
}

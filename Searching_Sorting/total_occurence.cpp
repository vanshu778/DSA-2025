#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int>arr, int target){
    int start=0;
    int end= arr.size()-1;
    int mid= start+(end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;  // Skip the right part
        }
        else if(target>arr[mid]){
            start=mid+1;  // Skip the left part
        }
        else{
            end=mid-1;  // Skip the right part
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int lastOccurence(vector<int>arr, int target){
    int start=0;
    int end= arr.size()-1;
    int mid= start+(end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            start=mid+1;  // Skip the left part
        }
        else if(target>arr[mid]){
            start=mid+1;  // Skip the left part
        }
        else{
            end=mid-1;  // Skip the right part
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    vector<int>arr{1,2,2,3,3,3,3,3,3,4,4,5,6,7,8};
    int target = 4;

    // Find first and last occurrence
    int first = firstOccurence(arr, target);
    int last = lastOccurence(arr, target);

    // Calculate total occurrences
    if (first == -1 || last == -1) {
        cout << "Target not found in the array." << endl;
    } else {
        int totalOccurrences = last - first + 1;
        cout << "Total occurrences of " << target << ": " << totalOccurrences << endl;
    }
    return 0;
}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int lastOccurence(vector<int>arr, int target){
    int start=0;
    int end= arr.size()-1;
    int mid= start+(end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            start=mid+1;
        }
        else if(target>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    vector<int>arr{1,2,2,3,3,3,3,3,3,4,4,5,6,7,8};
    int target = 4;
    // int indexofLastocc = lastOccurence(arr,target);

    // cout<<"Last occurence found at: "<<indexofLastocc;

     auto ans=upper_bound(arr.begin(),arr.end(),target);
  cout<<"ans is "<< ans-arr.begin() <<endl;
}
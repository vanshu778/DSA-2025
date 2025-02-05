#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int>arr, int target){
    int start=0;
    int end= arr.size()-1;
    int mid= start+(end-start)/2;
    int ans = -1;

    while(start<=end){

        //rule-1: when target is equal to mid of array then store possible index in ans and skip the right part
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
        }

        //rule-2: when target is greater than mid of array value then skip the left part  
        else if(target>arr[mid]){
            start=mid+1;
        }

        //rule-3: when target is less than mid of array value then skip the right part 
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    vector<int>arr{1,2,2,3,3,3,3,3,3,4,4,5,6,7,8};
    int target = 3;
    // int indexofFirstocc = firstOccurence(arr,target);
    // cout<<"first occurence found at: "<<indexofFirstocc;

    auto ans=lower_bound(arr.begin(), arr.end(),target);
    cout<<"ans is "<<ans-arr.begin()<<endl;
}
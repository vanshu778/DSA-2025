#include <iostream>
#include <vector>
using namespace std;

int Binary_Search(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    // find mid index
    int mid = start + (end - start) / 2;

    // terminating condition to outside of loop
    while (start <= end)
    {
        // rule1: when target found then return true
        int element = arr[mid];
        if (target == element)
        {
            return mid;
        }

        // rule2: when target is less than mid of array value then skip the right part
        else if (target < element)
        {
            end = mid - 1;
        }
        // rule3: when target is greater than mid of array value then skip the left part
        else
        {
            start = mid + 1;
        }
        // update the mid index
        mid = start + (end - start) / 2;
    }
    // when target not found then return false
    return -1;
}

int main()
{
    int arr[]= {10,20,30,40,50,60,70};
    int size=7;
    int target= 70;

    int binarysearchelement= Binary_Search(arr,size,target);

    if(binarysearchelement==-1){
        cout<<"target not found";
    }
    else{
        cout<<"target found at index "<<binarysearchelement;
    }

    // inbuilt function

    // by using algorithm
    //  int arr[] = {1,2,3,4,5,6,7};
    //  int size=7;
    //  if(Binary_Search(arr,arr+size,7)){
    //    cout<<"Found"<<endl;
    //  }
    //  else{
    //    cout<<"Not Found"<<endl;
    //  }

    // by using vector
    // vector<int> arr{1,2,3,4,5,6};
    //  if(Binary_Search(arr.begin(),arr.end(),3)){
    //    cout<<"Found"<<endl;
    //  }
    //  else{
    //    cout<<"Not Found"<<endl;
    //  }
}
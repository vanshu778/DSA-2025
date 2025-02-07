#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i=n-1; i>=0; i--){
        bool swapped = false;
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        break;
    }
}

int main(){
    // int arr[] = {1,2,3,4,5,6};
    int arr[] = {13,20,24,52,46,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before using Bubble Sort: "<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    bubble_sort(arr,n);
    cout<<"After using Bubble Sort: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
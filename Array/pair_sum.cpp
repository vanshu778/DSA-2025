#include <iostream>
#include<vector>
using namespace std;

void printAllPairs(vector<int>arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            cout << arr[i] << ' ' << arr[j] <<'\n';
        }
    }
    cout<<'\n';
}

int main() {

//   //pair sum
//   vector<int>arr{10,20,40,60,70};
//   int sum=80;
//   //outer loop will traverse for each element
//   for(int i=0;i<arr.size();i++){
//     int element=arr[i];

//     for(int j=i+1;j<arr.size();j++){
//       // cout<<"("<<element<<","<<arr[j]<<")"<<endl;
//       if(element+arr[j]==sum){
//         cout<<"Pair found ("<<element<<","<<arr[j]<<")"<<endl;
//       }
//     }
//   }





  //triplet
  // vector<int>arr{10,20,40,60,70};
  // int sum=90;
  // //outer loop will traverse for each element
  // for(int i=0;i<arr.size();i++){
  //   int element=arr[i];

  //   for(int j=i+1;j<arr.size();j++){
  //     int element2=arr[j];

  //     for(int k=j+1;k<arr.size();k++){
  //       if(arr[k]+element2+element==sum){
  //         cout<<"Pair found ("<<element<<","<<element2<<","<<arr[k]<<")"<<endl;
  //       }
  //     }
  //   }
  // }

   int n;
      cin>>n;
      vector<int>arr(n);
      for(int i=0; i<n; i++){
          cin>>arr[i];
      }
      printAllPairs(arr);
  
  
} 
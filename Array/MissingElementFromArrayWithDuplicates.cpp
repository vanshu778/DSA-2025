// Approach: --

//  Negative marking approach
// void findMissing(vector<int>arr){
//     int n= arr.size();

//     //step1: apply visited method
//     for(int i=0;i<n;i++){
//         int index=abs(arr[i]);
//         if(arr[index-1]>0){
//             arr[index-1]*=-1;
//         }
//     }

//     //step2: all positive index are missing
//     for(int i=0; i<n; i++){
//         if(arr[i]>0){
//             cout<<i+1<<" ";
//         }
//     }
// }

//  Sorting approach
// void findMissing(vector<int>arr){
//     int n= arr.size();

    //step1: sorting array
    // sort(arr.begin(),arr.end());

    // //step2: printing missing element
    // for(int i=0;i<n;i++){
    //     if(arr[i]!=i+1){
    //         cout<<i+1<<" ";
    //     }
    // }
//}
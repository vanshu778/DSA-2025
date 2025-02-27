//Brute force approach

// int bruteForceSol(int *arr, int n){
//     for(int i=0;i<n;i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]==arr[j]){
//                 return i+1;
//             }
//         }
//     }
//     return -1;
// }

// Optimal approach with hashing technique
int optimalSol(int arr[], int n){
    //declared unordered_map
    unordered_map<int,int>hash;

    //step1: traverse array and store it's element as hashing
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    //step2: traverse array to check each element if it has occurence in future
    for(int i=0; i<n; i++){
        if(hash[arr[i]]>1){
            return i+1;
        }
    }
    return -1;
}
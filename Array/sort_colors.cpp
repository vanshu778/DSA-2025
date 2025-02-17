// method-1 sorting
//  void sortColors(vector<int>& nums) {
//  sort(nums.begin(),nums.end());
//  }

// method-2 counting method
// void sortColors(vector<int>& nums) {
//   int count0 = 0, count1 = 0, count2 = 0;

//         // Step 1: Count occurrences of 0, 1, and 2
//         for (int num : nums) {
//             if (num == 0) count0++;
//             else if (num == 1) count1++;
//             else count2++;
//         }

//         // Step 2: Overwrite the array with sorted values
//         int i = 0;
//         while (count0--) nums[i++] = 0;  // Fill all 0s
//         while (count1--) nums[i++] = 1;  // Fill all 1s
//         while (count2--) nums[i++] = 2;  // Fill all 2s
//     }

//method-3 inplace - 3 pointer approach
//     void sortColors(vector<int>& nums) {
//         int low = 0,  mid = 0, high = nums.size()-1;

//         while(mid<=high){
//             if(nums[mid] == 0){
//                 swap(nums[low],nums[mid]);
//                 low++;
//                 mid++;
//             }
//             else if(nums[mid]==1){
//                 mid++;
//             }
//             else{
//                 swap(nums[mid],nums[high]);
//                 high--;
//             }
//         }
//     }

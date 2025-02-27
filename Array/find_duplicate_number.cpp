// APPROACH:

// Method 01: Sorting approach

// int findDuplicate(vector<int>& nums){
//     //step1: sort nums
//     sort(nums.begin(), nums.end());

//     //step2: iterate sorted array
//     int duplicate = -1;
//     for(int i =0 ; i<nums.size()-1; i++){
//         //check duplicate number
//         if(nums[i] == nums[i+1]){
//             duplicate = nums[i];
//             break;
//         }
//     }
//     return duplicate;
// }

// Method 02: Negative marking approach

// int findDuplicate(vector<int>& nums){
//     int duplicate=-1;
//     for(int i=0; i<nums.size(); i++){
//         //store absolute position temporary
//         int index = abs(nums[i]);

//         //not visited position
//         if(nums[index]>0){
//             nums[index]*=-1;
//         }

//         //Already visited position
//         else{
//             duplicate=index;
//             return duplicate;
//         }
//     }
//     return duplicate;
// }

// Method 03: Position and swapping approach
// int findDuplicate(vector<int>& nums){
//     while(nums[0]!=nums[nums[0]]){
//         swap(nums[0],nums[nums[0]]);
//     }
//     return nums[0];
// }
// class Solution {
//     public:
//         long long countSubarrays(vector<int>& nums, int minK, int maxK) {
//             long long ans = 0;
//             int n = nums.size(), mini = -1, maxi = -1, left = -1;
//             for(int i = 0; i<n; i++){
//                 if(nums[i]>maxK || nums[i]<minK) left = i;
//                 if(nums[i]==minK) mini = i;
//                 if(nums[i]==maxK) maxi = i;
    
//                 ans = ans + max(0, min(mini,maxi)-left);
//             }
//             return ans;
//         }
//     };
// class Solution {
//     public:
//         long long countGood(vector<int>& nums, int k) {
//             int n = nums.size();
//             int right=-1;
//             int same = 0;
//             long long ans = 0;
//             unordered_map<int,int> cnt;
//             for(int left = 0; left<n; left++){
//                 while(right+1<n && same<k){
//                     right++;
//                     same = same + cnt[nums[right]];
//                     cnt[nums[right]]++;
//                 }
//                 if(same>=k) ans = ans + n-right;
//                 cnt[nums[left]]--;
//                 same = same - cnt[nums[left]];
//             }
//             return ans;
//         }
//     };
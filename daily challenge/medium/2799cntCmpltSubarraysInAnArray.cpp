// class Solution {
//     public:
//         int countCompleteSubarrays(vector<int>& nums) {
//             int right=0, ans=0;
//             unordered_map<int,int> cnt;
//             unordered_set<int> st(nums.begin(), nums.end());
//             int dst = st.size();
//             for(int  left=0; left<nums.size(); left++){
//                 if(left>0){
//                     int remove = nums[left-1];
//                     cnt[remove]--;
//                     if(cnt[remove] == 0){
//                         cnt.erase(remove);
//                     }
//                 }
//                 while(right<nums.size() && cnt.size() < dst){
//                     int add = nums[right];
//                     cnt[add]++;
//                     right++;
//                 }
//                 if(cnt.size() == dst) ans = ans + nums.size()-right+1;
//             }
//             return ans;
//         }
//     };
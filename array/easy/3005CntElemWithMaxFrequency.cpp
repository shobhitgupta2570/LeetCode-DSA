// class Solution {
// public:
//     int maxFrequencyElements(vector<int>& nums) {
//         unordered_map<int,int> mp;
//         for(int i=0; i<nums.size();i++){
//             mp[nums[i]]++;
//         }
//         int maxi = 0;
//         for(auto [it,val] : mp){
//             maxi = max(maxi,val);
//         }
//         int cnt = 0;
//         for(auto [it,val]: mp){
//             if(val == maxi) cnt += val;
//         }
//         return cnt;
//     }
// };
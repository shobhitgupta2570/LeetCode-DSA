// class Solution {
//     public:
//         int countLargestGroup(int n) {
//             unordered_map<int,int> mp;
//             int maxi = 0;
    
//             for(int i=1; i<=n; i++){
//                 int temp = i;
//                 int sum = 0;
//                 while(temp>0){
//                     sum = sum + temp%10;
//                     temp = temp/10 ;
//                 }
//                 mp[sum]++;
//                 maxi = max(maxi,mp[sum]);
//             }
//             int ans = 0;
//             for(auto &[key,value]: mp){
//                 if(value == maxi){
//                     ans++;
//                 }
//             }
//             return ans;
//         }
//     };
// class Solution {
// public:
//     long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
//         vector<int> c = arr;
//         vector<int> d = brr;
//         sort(arr.begin(),arr.end());
//         sort(brr.begin(),brr.end());
//         int n = arr.size();
//         long long cost = k;
//         long long oCost = 0;
//         for(int i=0; i<arr.size(); i++){
//             cost = cost + abs(arr[i]-brr[i]);
//             oCost = oCost + abs(c[i]-d[i]);
//         }
//         return min(cost,oCost);
//     }
// };
// class Solution {
// public:

// int findMax(vector<int> &v) {
//     int maxi = INT_MIN;
//     int n = v.size();
//     //find the maximum:
//     for (int i = 0; i < n; i++) {
//         maxi = max(maxi, v[i]);
//     }
//     return maxi;
// }


//     long long totalHoursCalculate(vector<int>& piles, int mid){
//         long long hourSum = 0;
//         for(int i = 0;i<piles.size(); i++){
//             // hourSum = hourSum + ceil((double)(piles[i])/(double)(mid));
//             hourSum += (piles[i] + mid - 1) / mid;
//         }
//         return hourSum;
//     }

//     int minEatingSpeed(vector<int>& piles, int h) {
//         // sort(piles.begin(),piles.end()); 
//         int low= 1;
//         // int high = piles[piles.size() -1] ;
//         int high = findMax(piles);
//         while(low<=high){
//             int mid = low + (high - low) / 2;
//             long long totalHours = totalHoursCalculate(piles,mid);
//             if(totalHours <= h){
//                 high=mid-1;
//             }
//             else {
//                 low = mid+1;
//             }
//         }
//         return low;
//     }
// };
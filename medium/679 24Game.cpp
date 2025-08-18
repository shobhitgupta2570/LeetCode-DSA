// class Solution {
// public:
//     bool judgePoint24(vector<int>& cards) {
//         vector<double> nums;
//         for (int c : cards) nums.push_back((double)c);
//         return solve(nums);
//     }
    
//     bool solve(vector<double>& nums) {
//         if (nums.size() == 1) {
//             return fabs(nums[0] - 24) < 1e-6;
//         }
        
//         int n = nums.size();
//         // try all pairs
//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 vector<double> next;
//                 for (int k = 0; k < n; k++) {
//                     if (k != i && k != j) next.push_back(nums[k]);
//                 }
                
//                 // try all results of nums[i] op nums[j]
//                 for (double val : compute(nums[i], nums[j])) {
//                     next.push_back(val);
//                     if (solve(next)) return true;
//                     next.pop_back();
//                 }
//             }
//         }
//         return false;
//     }
    
//     vector<double> compute(double a, double b) {
//         vector<double> res;
//         res.push_back(a + b);
//         res.push_back(a - b);
//         res.push_back(b - a);
//         res.push_back(a * b);
//         if (fabs(b) > 1e-6) res.push_back(a / b);
//         if (fabs(a) > 1e-6) res.push_back(b / a);
//         return res;
//     }
// };

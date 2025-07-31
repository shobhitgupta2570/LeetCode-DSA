// class Solution {
// public:
//     int subarrayBitwiseORs(vector<int>& arr) {
//         unordered_set<int> res;
//         unordered_set<int> curr;
//         unordered_set<int> prev;

//         for (int num : arr) {
//             curr.clear();
//             curr.insert(num);

//             for (int x : prev) {
//                 curr.insert(x | num);
//             }

//             prev = curr;

//             for (int x : curr) {
//                 res.insert(x);
//             }
//         }

//         return res.size();
//     }
// };

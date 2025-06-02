// class Solution {
// public:
//     int candy(vector<int>& ratings) {
//         int n = ratings.size();
//         vector<int> candies(n, 1);

//         // Left to Right
//         for (int i = 1; i < n; ++i) {
//             if (ratings[i] > ratings[i - 1]) {
//                 candies[i] = candies[i - 1] + 1;
//             }
//         }

//         // Right to Left
//         for (int i = n - 2; i >= 0; --i) {
//             if (ratings[i] > ratings[i + 1]) {
//                 candies[i] = max(candies[i], candies[i + 1] + 1);
//             }
//         }

//         // Sum total candies
//         return accumulate(candies.begin(), candies.end(), 0);
//     }
// };

// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {
//         unordered_map<int, int> basket; // fruitType -> count
//         int left = 0, maxFruits = 0;

//         for (int right = 0; right < fruits.size(); ++right) {
//             basket[fruits[right]]++; // add fruit to basket

//             // If more than 2 types, shrink window from left
//             while (basket.size() > 2) {
//                 basket[fruits[left]]--;
//                 if (basket[fruits[left]] == 0) {
//                     basket.erase(fruits[left]);
//                 }
//                 left++;
//             }

//             // Update maximum window size
//             maxFruits = max(maxFruits, right - left + 1);
//         }

//         return maxFruits;
//     }
// };

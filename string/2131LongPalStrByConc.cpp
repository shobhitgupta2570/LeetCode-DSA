// #include <unordered_map>
// #include <string>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int longestPalindrome(vector<string>& words) {
//         unordered_map<string, int> count;
//         int length = 0;
//         bool hasMiddle = false;

//         for (const string& word : words) {
//             string reversed = string{word.rbegin(), word.rend()};

//             if (count[reversed] > 0) {
//                 // A palindrome pair is found
//                 count[reversed]--;
//                 length += 4;
//             } else {
//                 count[word]++;
//             }
//         }

//         // Check if any same-letter pair like "aa", "bb" is left
//         for (auto& [word, freq] : count) {
//             if (word[0] == word[1] && freq > 0) {
//                 length += 2;
//                 break;  // Only one can be placed in the middle
//             }
//         }

//         return length;
//     }
// };

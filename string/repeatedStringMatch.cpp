// class Solution {
// public:
//     int repeatedStringMatch(string a, string b) {
//         int n = a.length();
//         int m = b.length();
        
//         int repetitions = (m + n - 1) / n; 
        
//         string repeatedA = "";
//         for (int i = 0; i < repetitions; i++) {
//             repeatedA += a;
//         }
        
//         if (repeatedA.find(b) != string::npos) {
//             return repetitions;
//         }
        
//         repeatedA += a;
//         if (repeatedA.find(b) != string::npos) {
//             return repetitions + 1;
//         }
        
//         return -1; 
//     }
// };
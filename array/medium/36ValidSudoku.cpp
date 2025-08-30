// class Solution {
// public:
//     bool isValidSudoku(vector<vector<char>>& board) {
//         int n = 9, m = 9;
//         vector<int> exist(9, 0);

//         // check rows
//         for (int i = 0; i < n; i++) {
//             fill(exist.begin(), exist.end(), 0);
//             for (int j = 0; j < m; j++) {
//                 char c = board[i][j];
//                 if (c == '.') continue;
//                 int idx = c - '1';  // map '1'..'9' -> 0..8
//                 if (exist[idx]) return false;
//                 exist[idx] = 1;
//             }
//         }

//         // check cols
//         for (int j = 0; j < m; j++) {
//             fill(exist.begin(), exist.end(), 0);
//             for (int i = 0; i < n; i++) {
//                 char c = board[i][j];
//                 if (c == '.') continue;
//                 int idx = c - '1';
//                 if (exist[idx]) return false;
//                 exist[idx] = 1;
//             }
//         }

//         // check 3x3 subgrids
//         for (int bi = 0; bi < 9; bi += 3) {
//             for (int bj = 0; bj < 9; bj += 3) {
//                 fill(exist.begin(), exist.end(), 0);
//                 for (int i = 0; i < 3; i++) {
//                     for (int j = 0; j < 3; j++) {
//                         char c = board[bi + i][bj + j];
//                         if (c == '.') continue;
//                         int idx = c - '1';
//                         if (exist[idx]) return false;
//                         exist[idx] = 1;
//                     }
//                 }
//             }
//         }

//         return true;
//     }
// };

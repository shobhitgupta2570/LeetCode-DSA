// class Solution {

// private:
//     bool findWord(vector<vector<char>>& board, string word, int i, int j, int index,
//     int n, int m){
//         if(index == word.length()) return true;
       
//         if(i<0 || j<0 || i==n || j == m || board[i][j]=='!' ||
//         board[i][j] != word[index]) return false;

//         char c = board[i][j];
//         board[i][j] = '!';
         
//         bool top = findWord(board, word, i-1, j, index+1, n, m);
//         bool down = findWord(board, word, i+1, j, index+1, n, m);
//         bool left = findWord(board, word, i, j-1, index+1, n, m);
//         bool right = findWord(board, word, i, j+1, index+1, n, m);

//         board[i][j] = c;

//         return top || down || left || right;
//     }

// public:
//     bool exist(vector<vector<char>>& board, string word) {
//         int n = board.size();
//         int m = board[0].size();
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(board[i][j] == word[0]){
//                     if(findWord(board,word,i,j,0,n,m)) return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

#include <bits/stdc++.h>
using namespace std;

class Solution {

private:
    bool findWord(vector<vector<char>>& board, string word, int i, int j, int index,
    int n, int m){
        if(index == word.length()) return true;
       
        if(i<0 || j<0 || i==n || j == m || board[i][j]=='!' ||
        board[i][j] != word[index]) return false;

        char c = board[i][j];
        board[i][j] = '!';
         
        bool top = findWord(board, word, i-1, j, index+1, n, m);
        bool down = findWord(board, word, i+1, j, index+1, n, m);
        bool left = findWord(board, word, i, j-1, index+1, n, m);
        bool right = findWord(board, word, i, j+1, index+1, n, m);

        board[i][j] = c;

        return top || down || left || right;
    }

public:
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(board[i][j] == word[0]){
                    if(findWord(board,word,i,j,0,n,m)) return true;
                }
            }
        }
        return false;
    }
};

int main(){
    Solution obj;
    vector<vector<char>> board = {
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };
    string word = "ABCCED";
    cout<<obj.exist(board, word);
}
// class Solution {
// public:
//  int longestPalindromeSubseq(string s) {
//         string t = s;
//         reverse(s.begin(),s.end());
//         int n = s.size();
//         int m = t.size();
//         // vector<vector<int>> dp(n+1, vector<int>(m+1,0));
//         vector<int> prev(m+1,0) , curr(m+1,0);
//         for(int i=1; i<=n; i++){
//             for(int j=1 ; j<=m; j++){
//                 if(s[i-1] == t[j-1]){
//                 curr[j] = 1 + prev[j-1];
//                 }else{
//                     curr[j] = 0 + max(prev[j], curr[j-1]);
//                 }
//             }
//             prev = curr;
//         }

//         return curr[m];
//     }
// };


#include <bits/stdc++.h>
using namespace std;

// Function to calculate the length of the Longest Common Subsequence
int lcs(string s1, string s2) {
    int n = s1.size();
    int m = s2.size();

    // Create two arrays to store the previous and current rows of DP values
    vector<int> prev(m + 1, 0), cur(m + 1, 0);

    // Base Case is covered as we have initialized the prev and cur to 0.

    for (int ind1 = 1; ind1 <= n; ind1++) {
        for (int ind2 = 1; ind2 <= m; ind2++) {
            if (s1[ind1 - 1] == s2[ind2 - 1])
                cur[ind2] = 1 + prev[ind2 - 1];
            else
                cur[ind2] = max(prev[ind2], cur[ind2 - 1]);
        }
        // Update the prev array with the current values
        prev = cur;
    }

    // The value at prev[m] contains the length of the LCS
    return prev[m];
}

// Function to calculate the length of the Longest Palindromic Subsequence
int longestPalindromeSubsequence(string s) {
    // Create a reversed copy of the string
    string t = s;
    reverse(s.begin(), s.end());

    // Call the LCS function to find the length of the Longest Common Subsequence
    return lcs(s, t);
}

int main() {
    string s = "bbabcbcab";

    // Call the longestPalindromeSubsequence function and print the result
    cout << "The Length of Longest Palindromic Subsequence is " << longestPalindromeSubsequence(s);
    return 0;
}


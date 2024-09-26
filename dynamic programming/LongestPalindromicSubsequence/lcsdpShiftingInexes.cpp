// class Solution {
// public:

//     int lcs(string & s1 , string& s2, int i, int j, vector<vector<int>> & dp){
//         if(i == 0 || j == 0){
//             return 0;
//         }
//         if(dp[i][j] != -1) return dp[i][j];

//         if(s1[i-1] == s2[j-1]){
//         return dp[i][j] = 1 +lcs(s1,s2,i-1,j-1, dp);
//         }
//         return dp[i][j] = 0 + max(lcs(s1,s2,i-1,j, dp), lcs(s1,s2,i,j-1, dp));
    
//     }


//     int longestPalindromeSubseq(string s) {
//         string t = s;
//         reverse(s.begin(),s.end());
//         int n = s.size();
//         int m = t.size();
//         vector<vector<int>> dp(n+1, vector<int>(m+1,-1));
//         int ans = lcs(s,t, n, m , dp);
//         return ans;
//     }
// };


#include <bits/stdc++.h>
using namespace std;

// Function to find the length of the Longest Common Subsequence (LCS)
int lcsUtil(string& s1, string& s2, int ind1, int ind2, vector<vector<int>>& dp) {
    // Base case: If either string reaches the end, return 0
    if (ind1 < 0 || ind2 < 0)
        return 0;

    // If the result for this pair of indices is already calculated, return it
    if (dp[ind1][ind2] != -1)
        return dp[ind1][ind2];

    // If the characters at the current indices match, increment the LCS length
    if (s1[ind1] == s2[ind2])
        return dp[ind1][ind2] = 1 + lcsUtil(s1, s2, ind1 - 1, ind2 - 1, dp);
    else
        // If the characters don't match, consider two options: moving either left or up in the strings
        return dp[ind1][ind2] = max(lcsUtil(s1, s2, ind1, ind2 - 1, dp), lcsUtil(s1, s2, ind1 - 1, ind2, dp));
}

// Function to calculate the length of the Longest Common Subsequence
int lcs(string s1, string s2) {
    int n = s1.size();
    int m = s2.size();

    vector<vector<int>> dp(n, vector<int>(m, -1)); // Create a DP table
    return lcsUtil(s1, s2, n - 1, m - 1, dp);
}

int main() {
    string s1 = "acd";
    string s2 = "ced";

    // Call the function to find and output the length of the Longest Common Subsequence
    cout << "The Length of Longest Common Subsequence is " << lcs(s1, s2) << endl;

    return 0; // Return 0 to indicate successful program execution
}


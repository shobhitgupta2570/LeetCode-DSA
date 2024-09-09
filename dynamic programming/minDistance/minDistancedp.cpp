// class Solution {

//     int f(int i, int j, string & s1, string & s2,vector<vector<int>> &dp){
//         if(i<0) return j+1;
//         if(j<0) return i+1;
//         if(dp[i][j]!=-1) return dp[i][j];
//          if(s1[i]== s2[j]) return dp[i][j] = f(i-1,j-1,s1,s2,dp);
//          else{
//          return  dp[i][j] = 1 + min(f(i-1,j-1,s1,s2,dp),min(f(i-1,j,s1,s2,dp),f(i,j-1,s1,s2,dp)));
//     }
//     }
// public:
//     int minDistance(string word1, string word2) {
//         int n = word1.size();
//         int m = word2.size();
//         vector<vector<int>> dp(n,vector<int>(m,-1));
//         int ans = f(n-1,m-1,word1,word2,dp);
//         return ans;
//     }
// };


#include <bits/stdc++.h>
using namespace std;

// Function to calculate the edit distance between two strings
int editDistanceUtil(string& S1, string& S2, int i, int j, vector<vector<int>>& dp) {
    // Base cases
    if (i < 0)
        return j + 1;
    if (j < 0)
        return i + 1;

    // If the result for this state has already been calculated, return it
    if (dp[i][j] != -1)
        return dp[i][j];

    // If the characters at the current positions match, no operation is needed
    if (S1[i] == S2[j])
        return dp[i][j] = 0 + editDistanceUtil(S1, S2, i - 1, j - 1, dp);

    // Minimum of three choices:
    // 1. Replace the character at S1[i] with the character at S2[j]
    // 2. Delete the character at S1[i]
    // 3. Insert the character at S2[j] into S1
    else
        return dp[i][j] = 1 + min(editDistanceUtil(S1, S2, i - 1, j - 1, dp),
                                  min(editDistanceUtil(S1, S2, i - 1, j, dp),
                                      editDistanceUtil(S1, S2, i, j - 1, dp)));
}

// Function to calculate the minimum number of operations required to transform S1 into S2
int editDistance(string& S1, string& S2) {
    int n = S1.size();
    int m = S2.size();

    // Create a DP table to memoize results
    vector<vector<int>> dp(n, vector<int>(m, -1));

    // Call the utility function with the last indices of both strings
    return editDistanceUtil(S1, S2, n - 1, m - 1, dp);
}

int main() {
    string s1 = "horse";
    string s2 = "ros";

    // Call the editDistance function and print the result
    cout << "The minimum number of operations required is: " << editDistance(s1, s2);
    return 0;
}


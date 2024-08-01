#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    int lcs(int i, int j, string& s1, string& s2){
        if(i==0 || j==0) return 0;
        if(s1[i-1]==s2[j-1]) return 1+lcs(i-1,j-1,s1,s2);
        else return max(lcs(i-1,j,s1,s2), lcs(i,j-1,s1,s2));
        
    }

    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        int ans = lcs(n,m,text1,text2);
        return ans;
    }
};

int main() {
    string s1 = "acd";
    string s2 = "ced";

    // Call the function to find and output the length of the Longest Common Subsequence
    cout << "The Length of Longest Common Subsequence is " << lcs(s1, s2) << endl;

    return 0; // Return 0 to indicate successful program execution
}
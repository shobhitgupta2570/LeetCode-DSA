class Solution {
public:
    int countBinarySubstrings(string s) {
        int ans = 0;
        int prevGroup = 0;   // length of previous group of consecutive chars
        int currGroup = 1;   // length of current group (start with first char)

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                currGroup++;  // extend current group
            } else {
                ans += min(prevGroup, currGroup); // count substrings between groups
                prevGroup = currGroup;            // shift current group to previous
                currGroup = 1;                    // reset current group
            }
        }
        ans += min(prevGroup, currGroup); // final addition
        return ans;
    }
};

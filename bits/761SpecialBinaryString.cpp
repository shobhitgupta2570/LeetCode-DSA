class Solution {
public:
    string makeLargestSpecial(string s) {
        vector<string> specials;
        int count = 0, i = 0;

        for (int j = 0; j < s.size(); ++j) {
            count += (s[j] == '1') ? 1 : -1;
            if (count == 0) {
                // Extract inner substring and recurse
                string inner = s.substr(i + 1, j - i - 1);
                specials.push_back("1" + makeLargestSpecial(inner) + "0");
                i = j + 1;
            }
        }

        // Sort substrings in descending order
        sort(specials.begin(), specials.end(), greater<string>());

        // Concatenate results
        string result;
        for (auto &sub : specials) result += sub;
        return result;
    }
};

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        // Step 1: Sort potions so binary search works
        sort(potions.begin(), potions.end());
        int m = potions.size();
        vector<int> ans;

        // Step 2: For each spell, find number of valid potions
        for (int spell : spells) {
            // Minimum potion power needed to reach success
            long long required = (success + spell - 1) / spell; 
            // Same as ceil(success / spell)

            // Step 3: Find first potion >= required
            int idx = lower_bound(potions.begin(), potions.end(), required) - potions.begin();

            // Step 4: Remaining potions are successful
            ans.push_back(m - idx);
        }
        return ans;
    }
};

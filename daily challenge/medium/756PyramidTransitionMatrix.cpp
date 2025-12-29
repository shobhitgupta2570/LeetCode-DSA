class Solution {
public:
    bool pyramidTransition(string bottom, vector<string>& allowed) {
        unordered_map<string, vector<char>> prefixToBlocks;
        for (auto &a : allowed) {
            prefixToBlocks[a.substr(0,2)].push_back(a[2]);
        }
        unordered_map<string,bool> memo;
        return dfs(bottom, prefixToBlocks, memo);
    }

private:
    bool dfs(string row, unordered_map<string, vector<char>>& prefixToBlocks,
             unordered_map<string,bool>& memo) {
        if (row.size() == 1) return true;
        if (memo.count(row)) return memo[row];
        
        vector<string> nextRows;
        buildNextRows(row, 0, "", prefixToBlocks, nextRows);
        
        for (auto &nr : nextRows) {
            if (dfs(nr, prefixToBlocks, memo)) return memo[row] = true;
        }
        return memo[row] = false;
    }
    
    void buildNextRows(string &row, int i, string cur,
                       unordered_map<string, vector<char>>& prefixToBlocks,
                       vector<string>& nextRows) {
        if (i == row.size()-1) {
            nextRows.push_back(cur);
            return;
        }
        string prefix = row.substr(i,2);
        if (!prefixToBlocks.count(prefix)) return;
        for (char c : prefixToBlocks[prefix]) {
            buildNextRows(row, i+1, cur+c, prefixToBlocks, nextRows);
        }
    }
};

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> existing(100,0), extra;
        for(auto it: nums){
            if(existing[it] > 0 ) extra.push_back(it);
            else existing[it]++;
        }
        return extra;
    }
};
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size(), temp = k , ind = 0;
        for(int  i=0; i<n; i++){
            if(nums[i] == 1){
                ind = i;
                break;
            } 
        }
        for(int i=ind+1; i<n; i++){
            if(nums[i] == 1 && temp>0) return false;
            else if(nums[i] == 1 && temp<=0) temp = k;
            else temp--;
        }
        return true;
    }
};
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        int n = happiness.size();
        sort(happiness.begin(), happiness.end());
        long long sum = 0;
        for(int i=0; i<n; i++){
            if(k<=0) break;
            sum += (happiness[n-1-i] - i) <= 0 ? 0 : happiness[n-1-i] - i;
            k--; 
        }
        return sum;
    }
};
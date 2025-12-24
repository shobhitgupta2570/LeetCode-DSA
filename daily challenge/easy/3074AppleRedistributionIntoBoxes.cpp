class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = 0, capaciSum = 0, ans = 0;
        sort(capacity.begin(), capacity.end());
        for(auto it : apple) sum += it;
        for(int i=capacity.size()-1; i>=0; i--){
            if(capaciSum >= sum) break;
            capaciSum += capacity[i];
            ans++;
        }
        return (capaciSum >= sum) ? ans : -1;
    }
};
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        vector<int> freq(100001, 0);
        for (int c : costs) freq[c]++;
        
        int count = 0;
        for (int price = 1; price <= 100000; price++) {
            if (freq[price] == 0) continue;
            int buy = min(freq[price], coins / price);
            count += buy;
            coins -= buy * price;
            if (coins < price) break;
        }
        return count;
    }
};

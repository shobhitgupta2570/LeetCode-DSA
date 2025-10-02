class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;
        while(numBottles-numExchange>=0){
            numBottles -= numExchange;
            ans++;
            numBottles++;
            numExchange++; 
        }
        return ans;
    }
};
// class Solution {
//     public:
//         int numRabbits(vector<int>& answers) {
//             unordered_map<int, int> count;
//         for (int answer : answers) {
//             count[answer]++;
//         }
        
//         int totalRabbits = 0;
//         for (auto& [key, value] : count) {
//             int groupSize = key + 1; // Each group has key + 1 rabbits
//             int groups = ceil((double)value / groupSize); // Number of groups needed
//             totalRabbits += groups * groupSize; // Total rabbits in these groups
//         }
        
//         return totalRabbits;
//         }
//     };
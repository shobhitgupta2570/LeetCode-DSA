// class Solution {
// public:
//     int findContentChildren(vector<int>& g, vector<int>& s) {
//         sort(g.begin(),g.end());
//         sort(s.begin(),s.end());
//         int i = 0;
//         int j = 0;
//         int ans = 0;
//         while(i<g.size() && j<s.size()){
//             if(g[i]<=s[j]){
//                 i++;
//                 ans++;
//             } 
//             j++;
//         }
//         return ans;
//     }
// };

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i = 0;
        int j = 0;
        int ans = 0;
        while(i<g.size() && j<s.size()){
            if(g[i]<=s[j]){
                i++;
                ans++;
            } 
            j++;
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> child = {1,2,3,4,5,6};
    vector<int> cookie = {-2,-3,1,7};
    cout<<s.findContentChildren(child,cookie)<<endl;
    return 0;
}
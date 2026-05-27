class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lower(26,-1), upper(26,-1);
        for(int i = 0; i<word.size(); i++){
            char it = word[i];
            if(isupper(it)){
                 if(upper[it-'A'] == -1) upper[it -'A'] = i;
            } 
            else  lower[it-'a'] = i;
        }
        int cnt = 0;
        for(int i=0; i<26; i++){
            if(lower[i] != -1 && upper[i] != -1 && lower[i]<upper[i]) cnt++; 
        }
        return cnt;
    }
};
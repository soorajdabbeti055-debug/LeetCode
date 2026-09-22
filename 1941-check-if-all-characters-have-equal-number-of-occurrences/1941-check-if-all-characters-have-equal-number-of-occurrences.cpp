class Solution {
public:
    bool areOccurrencesEqual(string s) {
        if (s.empty()) return true;
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        int sf=mp[s[0]];
        for(const auto&[ch,count]:mp){
            if(count!=sf){
                return false;
            }
        }
        return true;
    }
};
class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<char, int> mp;
        int count = 0;
        int l = 0;
        for (int r = 0; r < s.size(); r++) {
            mp[s[r]]++;
            if (r - l + 1 > 3) {
                mp[s[l]]--;
                if (mp[s[l]] == 0) {
                    mp.erase(s[l]);
                }
                l++;
            }
            if (r - l + 1 == 3) {
                if (mp.size() == 3) {
                    count++;
                }
            }
        } 
        return count;  
    }
};
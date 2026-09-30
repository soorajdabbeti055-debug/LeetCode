class Solution {
public:
    char repeatedCharacter(string s) {
     /*    unordered_map<char,int>mp;
        char c;
        for(char k:s){
            if(mp[k]==1){
                c=k;
                break;
            }
            mp[k]++;
        }
        return c; */
        unordered_set<char>mp;
        for(char k:s){
            if(mp.count(k)){
                return k;
            }
            mp.insert(k);
        }
        return ' ';
    }
};
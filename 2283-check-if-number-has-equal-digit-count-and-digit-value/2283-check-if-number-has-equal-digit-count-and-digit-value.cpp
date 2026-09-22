class Solution {
public:
    bool digitCount(string num) {
        unordered_map<char,int>mp;
        for(char c:num){
            mp[c]++;
        }
        for(int i=0;i<num.size();i++){
            char dc='0'+i;
            int dd=num[i]-'0';
            if(mp[dc]!=dd){
                return false;
            }
        }
        return true;
    }
};
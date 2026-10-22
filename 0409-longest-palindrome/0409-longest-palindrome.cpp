class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        int n=s.size(),t=0,ec=0;
        if(n==0) return 0;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        bool h_odd=false;
        for(const auto&[key,value]:mp){
            if(value%2==0){
                ec+=value;
            }
            else{
                ec+=value-1;
                h_odd=true;
            }
        }
        if(h_odd){
            ec+=1;
        }
        return ec;
    }
};
class Solution {
public:
    int getLeastFrequentDigit(int n) {
        if(n==0) return 0;
        unordered_map<int,int>mp;
        while(n!=0){
            int k=n%10;
            mp[k]++;
            n/=10;
        }
        int t = mp.begin()->first;
        for(const auto&[key,value]:mp){
            if(mp[key]<mp[t]){
                t=key;
            }
            else if(mp[t]==mp[key]){
                t=min(t,key);
            }
        }
        return t;
    }
};
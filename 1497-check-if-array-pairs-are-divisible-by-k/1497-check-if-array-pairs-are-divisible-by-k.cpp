class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int num:arr){
            int rem = (num % k + k) % k;
            mp[rem]++;
        }
        if(mp[0]%2!=0){
            return false;
        }
        /* for(const auto&[key,value]:mp){
           int com = (k - key) % k; 
            if (mp[key] != mp[com]) {
                return false;
            }
        } */
        if (k % 2 == 0 && mp[k / 2] % 2 != 0) return false;
        for(int r=1;r<=k/2;r++){
            int com=abs(k-r);
            if(mp[r]!=mp[com]){
                return false;
            }
        }
        return true;
    }
};
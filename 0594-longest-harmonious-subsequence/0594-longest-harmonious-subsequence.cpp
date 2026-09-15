class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int m=0;
        for(auto &[n,freq]:mp){
            int k=0;
           if(mp.count(n+1)){
            k=mp[n]+mp[n+1];
            m=max(m,k);
           }
            }
        return m;
    }
};
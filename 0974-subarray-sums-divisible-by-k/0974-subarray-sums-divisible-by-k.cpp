class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size(),ps=0,count=0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            ps+=nums[i];
            int r = ((ps % k) + k) % k;
            if(mp.find(r)!=mp.end()){
                count+=mp[r];
            }
                mp[r]++;
            }
        return count;
    }
};
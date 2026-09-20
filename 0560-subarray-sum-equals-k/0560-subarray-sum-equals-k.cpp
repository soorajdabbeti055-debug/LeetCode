class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        mp[0]=1;
        int pref=0, count=0;
        for(int i=0;i<nums.size();i++){
            pref+=nums[i];
            if(mp.find(pref-k)!=mp.end()){
                count+=mp[pref-k];
            }
            mp[pref]++;
        }
        return count;
    }
};
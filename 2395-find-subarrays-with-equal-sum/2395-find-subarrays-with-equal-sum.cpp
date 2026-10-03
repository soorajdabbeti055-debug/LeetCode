class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int>mp;
        int n=nums.size();
        for(int i=0;i+1<n;i++){
            int sum=nums[i]+nums[i+1];
            if(mp.count(sum)){
                return true;
            }
            mp.insert(sum);
        }
        return false;
    }
};
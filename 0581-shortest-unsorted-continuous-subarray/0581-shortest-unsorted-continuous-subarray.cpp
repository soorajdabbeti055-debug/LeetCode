class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int count=0,n=nums.size();
        vector<int>mp;
        for(int num:nums){
            mp.push_back(num);
        }
        sort(mp.begin(),mp.end());
        int fm=-1,lm=-1;
        for(int i=0;i<n;i++){
           if(nums[i]!=mp[i]){
            if(fm==-1){
                fm=i;
            }
            lm=i;
           }
        }
        if(fm==-1) return 0;
        return lm-fm+1;
    }
};
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        /* int n=nums.size();
        long long ma=0;
        for(int r=0;r<n;r++){
            unordered_map<int,int>mp;
            int l=r,m=k;
            long long cs=0;
            while(l<n && m>0){
                if(mp.find(nums[l])!=mp.end()){
                    break;
                }
                mp[nums[l]]++;
                cs+=nums[l];
                l++;
                m--;
            }
            if (m == 0) {
                ma = max(ma, cs);
            }
        }
        return ma; */
        unordered_map<int,int>mp;
        int n=nums.size(),l=0,x=0;
        long long ma=0,cs=0;
        for(int i=0;i<n;i++){
          cs+=nums[i];
          mp[nums[i]]++;
          while(mp[nums[i]]>1 || (i-x+1)>k){
            cs-=nums[x];
            mp[nums[x]]--;
            if(mp[nums[x]]==0){
                mp.erase(nums[x]);
            }
            x++;
          }
          if((i-x+1)==k){
            ma=max(ma,cs);
          }
        }
        return ma;
    }
};
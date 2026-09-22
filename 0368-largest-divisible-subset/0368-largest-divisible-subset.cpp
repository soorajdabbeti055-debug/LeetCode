class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return {};
        sort(nums.begin(),nums.end());
        vector<int>dp(n,1);
        vector<int>p(n,-1);
        int ml=1,li=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0 && dp[j]+1>dp[i]){
                    dp[i]=dp[j]+1;
                    p[i]=j;
                }
            }
            if(dp[i]>ml){
                ml=dp[i];
                li=i;
            }
        }
        vector<int>res;
        while(li!=-1){
            res.push_back(nums[li]);
            li=p[li];
        }
        return res;
    }
};
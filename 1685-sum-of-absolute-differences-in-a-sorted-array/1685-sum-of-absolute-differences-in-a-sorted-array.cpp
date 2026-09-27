class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        /* vector<int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=abs(nums[i]-nums[j]);
            }
            mp.push_back(sum);
        }
        return mp; */
        vector<int>ps;
        int n=nums.size(),s=0;
        for(int i=0;i<n;i++){
            s+=nums[i];
            ps.push_back(s);
        }
        vector<int>mp;
        for(int i=0;i<n;i++){
            int ls = (i == 0) ? 0 : ps[i - 1];
            int l=nums[i]*i-ls;
            int rs=ps[n-1]-ls-nums[i];
            int rc=n-i-1;
            int r=rs-nums[i]*rc;
            int ts=l+r;
            mp.push_back(ts);
        }
        return mp;
    }
};
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,long long>mp;
        int n=nums.size();
        long long gp=0;
        for(int i=0;i<n;i++){
            mp[nums[i]-i]++;
        }
        for(auto&[n,frq]:mp){
            if(frq>1){
                long long f=frq*(frq-1)/2;
                gp+=f;
            }
        }
        long long tp=1LL*n*(n-1)/2;
        return tp-gp;
    }
};
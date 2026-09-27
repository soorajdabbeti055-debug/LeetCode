class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size(),ts=0;
        for(int num:nums){
            ts+=num;
        }
        int ls=0;
        for(int i=0;i<n;i++){
            int rs=ts-ls-nums[i];
            if(rs==ls){
                return i;
            }
            ls+=nums[i];
        }
        return -1;
    }
};
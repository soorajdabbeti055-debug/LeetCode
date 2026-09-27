class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size(),ts=0;
        for(int i=0;i<n;i++){
            ts+=nums[i];
        }
        int ls=0;
        for(int i=0;i<n;i++){
            int rs=ts-nums[i]-ls;
            if(ls==rs){
                return i;
            }
            ls+=nums[i];
        }
        return -1;
    }
};
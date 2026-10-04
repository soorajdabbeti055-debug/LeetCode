class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size(),ml=1,cl=1;
        if(nums.empty()) return 0;
        for(int i=0;i+1<n;i++){
            if(nums[i]<nums[i+1]){
                cl++;
            }
            else{
                cl=1;
            }
            ml=max(ml,cl);
        }
        return ml;
    }
};
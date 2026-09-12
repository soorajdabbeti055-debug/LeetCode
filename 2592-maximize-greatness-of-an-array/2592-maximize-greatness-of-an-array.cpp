class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        for(int x=0;x<nums.size();x++){
            if(nums[x]>nums[i]){
                i++;
            }
        }
        return i;
    }
};
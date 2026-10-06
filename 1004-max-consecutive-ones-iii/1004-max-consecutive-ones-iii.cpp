class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
     /*   int r=0,ma=0,t=k;
       for(int l=0;l<nums.size();l++){
        while(r<nums.size() && (nums[r]==1 || t!=0)){
            if(nums[r]==0){
                t--;
            }
            r++;
            
        }
        ma=max(ma,r-l+1);
        r=l;
        t=k;
       }
       return ma; */
       int l=0,ma=0,t=k;
       for(int r=0;r<nums.size();r++){
        if(nums[r]==0){
            t--;
        }
        while(t<0){
            if(nums[l]==0){
                t++;
            }
            l++;
        }
        ma=max(ma,r-l+1);
       }
       return ma;
    }
};
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)return 0;
      int l=0,n=nums.size(),count=0,p=1;
      for(int r=0;r<n;r++){
        p*=nums[r];
        while(p>=k){
            p/=nums[l];
            l++;
        }
        count+=(r-l+1);
      }  
      return count;
    }
};
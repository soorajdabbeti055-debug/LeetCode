class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size(),c=0,l=0;
        long long count=0;
        int la=0;
        for(int i=0;i<n;i++){
            if(nums[i]>la){
                la=nums[i];
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==la){
                c++;
            }
            while(c>=k){
                count+=n-i;
                if(nums[l]==la){
                    c--;
                }
                l++;
            }
        }
        return count;
    }
};
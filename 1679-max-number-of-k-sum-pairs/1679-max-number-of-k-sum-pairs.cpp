class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
       /*  sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0,r=n-1,count=0;
        while(l<r){
            int c=nums[l]+nums[r];
            if(c==k){
                count++;
                l++;
                r--;
            }
            else if(c<k){
                l++;
            }
            else{
                r--;
            }
        } */

        unordered_map<int,int>mp;
        int count=0;
        for(int num:nums){
            int t=k-num;
            if(mp[t]>0){
                count++;
                mp[t]--;
            }
            else{
                mp[num]++;
            }
        }
        return count;
    }
};
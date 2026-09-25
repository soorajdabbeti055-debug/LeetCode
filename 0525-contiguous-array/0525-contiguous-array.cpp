class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum=0,ml=0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
        }
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mp.find(sum)!=mp.end()){
                int k=i-mp[sum];
                ml=max(ml,k);
            }
            else{
                mp[sum]=i;
            }
        }
        return ml;
    }
};
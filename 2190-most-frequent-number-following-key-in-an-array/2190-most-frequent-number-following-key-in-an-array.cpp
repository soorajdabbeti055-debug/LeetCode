class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int>mp;
        for(int i=0;i+1<nums.size();i++){
            if(nums[i]==key){
                mp[nums[i+1]]++;
            }
        }
        int mf=0,me=0;
        for(const auto&[element,count]:mp){
            if(count>mf){
                mf=count;
                me=element;
            }
        }
        return me;
    }
};
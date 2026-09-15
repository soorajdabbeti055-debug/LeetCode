class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto&[n,freq]:mp){
            if(freq%2!=0){
                return false;
            }
        }
        return true;
    }
};
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int n=nums.size();
       unordered_map<int,int>mp;
       for(int i=0;i<n;i++){
        mp[nums[i]]++;
       }
       int p=0,np=0;
       for(auto& [element,freq]:mp){
        p+=freq/2;
        np+=freq%2;
       }
       return {p,np};
    }
};
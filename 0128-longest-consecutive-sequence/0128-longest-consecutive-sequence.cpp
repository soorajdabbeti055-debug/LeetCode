class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int>mp;
        int count=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            if(mp.find(x.first-1)==mp.end()){
                int cur=x.first;
                int l=0;
                while (mp.find(cur)!=mp.end()){
                   cur++;
                    l++;
                }
                count=max(count,l);
            }
        }
        return count;
    }
};
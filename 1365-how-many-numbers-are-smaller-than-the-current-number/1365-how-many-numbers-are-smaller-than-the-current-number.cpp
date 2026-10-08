class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       vector<int>mp;
       int n=nums.size();
       for(int i=0;i<n;i++){
        int cm=0;
        for(int j=0;j<n;j++){
            if(j!=i && nums[i]>nums[j]){
                cm++;
            }
        }
        mp.push_back(cm);
       }
        return mp;
    }
};
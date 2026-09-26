class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
    /*  int count=0;
        for(int i=0;i<nums.size();i++){
            int s=nums[i];
            if(s==goal){
                count++;
            }
            for(int j=i+1;j<nums.size();j++){
                s+=nums[j];
                if(s==goal){
                    count++;
                }
                else if(s>goal){
                    break;
                }
            }
        }
        return count; */
        int count=0,cs=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            cs+=nums[i];
            int need=cs-goal;
            if(mp.find(need)!=mp.end()){
                count+=mp[need];
            }
            mp[cs]++;
        }
        return count;
    }
};
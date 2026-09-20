class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
     for(int i=0;i<nums.size();i++){
        if(nums[i]%2!=0){
            nums[i]=1;
        }
        else{
            nums[i]=0;
        }
     }
     unordered_map<int,int>mp;
     mp[0]=1;
     int p=0,c=0;
     for(int i=0;i<nums.size();i++){
        p+=nums[i];
        if(mp.find(p-k)!=mp.end()){
            c+=mp[p-k];
        }
        mp[p]++;
     }  
     return c;
    }
};
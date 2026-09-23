class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int t=0,n=nums.size(),ts=0;
        int l=0,cs=0,ml=-1;
        for(int i=0;i<n;i++){
            t+=nums[i];
        }
        ts=t-x;
        if(ts<0) return -1;
        if(ts==0) return n;
        for(int r=0;r<n;r++){
            cs+=nums[r];
            while(cs>ts && l<=r){
                cs-=nums[l];
                l++;
            }
            if(cs==ts){
                ml=max(ml,r-l+1);
            }
        }
        return (ml==-1) ? -1 : (n-ml);
    }
};
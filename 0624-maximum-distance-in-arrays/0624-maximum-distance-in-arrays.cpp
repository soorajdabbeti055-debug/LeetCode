class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int n=arrays.size(),gmin=arrays[0].front(),gmax=arrays[0].back();
        int ans=0;
        for(int i=1;i<n;i++){
           int d1=abs(arrays[i].back()-gmin);
           int d2=abs(gmax-arrays[i].front());
           gmin=min(gmin,arrays[i].front());
           gmax=max(gmax,arrays[i].back());
           ans=max(ans,max(d1,d2));
        }
        return ans;
    }
};
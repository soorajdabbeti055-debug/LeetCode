class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int>mp;
        int r=grid.size(),c=grid[0].size();
        vector<int>ans;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mp.find(grid[i][j])!=mp.end()){
                    ans.push_back(grid[i][j]);
                }
                mp[grid[i][j]]++;
            }
        }
        int k=r*r;
        for(int i=1;i<=k;i++){
            if(mp.find(i)==mp.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
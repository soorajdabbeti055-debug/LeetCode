class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>results={{}};
        for(int num:nums){
            int r=results.size();
            for(int j=0;j<r;j++){
                vector<int>res=results[j];
                res.push_back(num);
                results.push_back(res);
            }
        }
        return results;
    }
};
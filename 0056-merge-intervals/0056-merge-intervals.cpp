class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty()) return {};
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>inter;
        for(const auto&interval:intervals){
            if(inter.empty() || inter.back()[1]<interval[0]){
                inter.push_back(interval);
            }
            else{
                inter.back()[1] = max(inter.back()[1], interval[1]);
            }
        }
        return inter;
    }
};
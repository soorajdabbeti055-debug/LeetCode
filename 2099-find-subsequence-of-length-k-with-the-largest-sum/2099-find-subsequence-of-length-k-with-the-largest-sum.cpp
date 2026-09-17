class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n=nums.size();
       vector<pair<int, int>> pairs(n);
        for (int i = 0; i < n; i++) {
            pairs[i] = {nums[i], i};
        }

        std::sort(pairs.begin(), pairs.end());
        std::vector<std::pair<int, int>> mp;
        for (int i = 0; i < k; i++) {
            mp.push_back(pairs[n - 1]);
            n--;
        }

        std::sort(mp.begin(), mp.end(), [](const auto& a, const auto& b) {
            return a.second < b.second;
        });
        std::vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(mp[i].first);
        }

        return result;
    }
};
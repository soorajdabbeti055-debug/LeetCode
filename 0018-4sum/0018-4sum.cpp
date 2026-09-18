class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        set<vector<int>>st;
        for(int k=0;k<n;k++){
            for(int m=k+1;m<n;m++){
                set<long long>h;
                for(int o=m+1;o<n;o++){
                    long long sum=(long long)nums[k]+nums[m]+nums[o];
                    long long fo=(long long)target-(sum);
                    if(h.find(fo)!=h.end()){
                        vector<int>temp={nums[k],nums[m],nums[o],(int)fo};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    h.insert(nums[o]);
                }
            }
        }
        return vector<vector<int>>(st.begin(),st.end());
    }
};
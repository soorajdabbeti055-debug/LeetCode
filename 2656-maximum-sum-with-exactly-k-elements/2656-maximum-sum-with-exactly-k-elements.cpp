class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int m=*max_element(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=m;
            m++;
        }
        return sum;
    }
};
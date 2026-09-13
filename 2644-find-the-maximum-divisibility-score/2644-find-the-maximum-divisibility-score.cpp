class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int md=-1;
        int m=0;
        for(int i:divisors){
            int k=0;
            for(int num:nums){
                if(num%i==0){
                    k++;
                }
            }
            if(k>md||(k==md && i<m)){
                md=k;
                m=i;
            }
        }
        return m;
    }
};
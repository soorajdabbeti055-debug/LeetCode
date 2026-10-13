class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
     /*  int ts=0,n=nums.size();
        int mi=n;
        for(int num:nums){
            ts+=num;
        }
        if(ts%p==0) return 0;
        for(int i=0;i<n;i++){
            int sa=nums[i],k=0,m=i;
            while(m<=(n-1) && (ts-sa)>=p){
                k++;
                if((ts-sa)%p==0){
                    mi=min(mi,k);
                }
                if(m<n-1){
                    sa+=nums[m+1];
                }
                m++;
            }
        }
        return mi; 
         */
        
        long long ts=0;
        for(int ch:nums){
            ts+=ch;
        }
        int t=ts%p;
        if(t==0) return 0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        int c_m=0,m_l=nums.size();
        for(int i=0;i<nums.size();i++){
            c_m=(c_m+nums[i])%p;
            int n_m=(c_m-t+p)%p;
            if(mp.count(n_m)){
                m_l=min(m_l,i-mp[n_m]);
            }
            mp[c_m]=i;
        }
        return (m_l==nums.size()) ? -1 : m_l;
    }
};
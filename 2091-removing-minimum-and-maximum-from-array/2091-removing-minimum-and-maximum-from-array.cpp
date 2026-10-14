class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mi=nums[0],ma=nums[0],n=nums.size();
        for(int i=0;i<n;i++){
            mi=min(mi,nums[i]);
            ma=max(ma,nums[i]);
        }

        int f_s=0,b_s=0,f1=0,b1=0,fb=0;
        bool fo=false,fo1=false;
        for(int i=0;i<n;i++){
            if(nums[i]==mi){
                fo=true;
            }
            if(nums[i]==ma){
                fo1=true;
            }
            if(fo==true && fo1==true){
                f_s=i;
                break;
            }
        }
        fo=false;
        fo1=false;
        for(int i=n-1;i>=0;i--){
             if(nums[i]==mi){
                fo=true;
            }
            if(nums[i]==ma){
                fo1=true;
            }
            if(fo==true && fo1==true){
                b_s=i;
                break;
            }
        }
        int li=min(f_s,b_s);
        int hi=max(f_s,b_s);
        f1=hi+1;
        b1=n-li;
        fb=(li+1)+(n-hi);
        int k=min(b1,f1);
        return min(k,fb);
    }
};
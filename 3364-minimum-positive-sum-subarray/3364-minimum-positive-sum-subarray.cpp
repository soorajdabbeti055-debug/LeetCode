class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
      /*   int j=0,n=nums.size();
        int csize=0,cs=0;
        bool found=false;
        int as=*max_element(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            cs+=nums[i];
            csize++;
            while(csize>=l && csize<=r){
                if(cs<as && cs>0){
                    as=cs;
                    cs-=nums[j];
                    j++;
                    csize--;
                    found=true;
                }
                else{
                    cs-=nums[j];
                    j++;
                    csize--;
                    found=true;
                }
            }
        }
        if(found){
            return as;
        }
        return -1; */
        int n = nums.size();
        int as = INT_MAX; 
        bool found = false;

        for (int i = 0; i < n; i++) {
            int cs = 0;
            int j = i;
            int csize = 0;
            while (j < n && csize < r) {
                cs += nums[j];
                csize++;
                if (csize >= l && csize <= r) {
                    if (cs > 0) {
                        as = min(as, cs);
                        found = true;
                    }
                }
                j++;
            }
        }
        
        return found ? as : -1;
    }
};
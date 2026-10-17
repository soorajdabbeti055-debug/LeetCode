class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
     int n=nums.size(),r=0;
     long long ts=0,lc=0;
     int len=0;
     for(int i=0;i<n;i++){
        if(nums[i]>right){
            int sc=i-r;
            ts+=(sc*(sc+1))/2;
            r=i+1;
        }
     }

     for(int i=0;i<n;i++){
         if(nums[i]<left){
            len++;
        }
        else{
            lc+=(len*(len+1))/2;
            len=0;
        }
     }
     lc+=1LL *len*(len+1)/2;
     int fc=n-r;
     ts+=1LL * fc *(fc+1)/2;
     return ts-lc;
    }
};
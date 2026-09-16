class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
       /*  int com = *max_element(nums1.begin(),nums1.end());
        int c=*max_element(nums1.begin(),nums1.end());
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    com=min(com,nums1[i]);
                }
            }
        }
        if(com==c){
            return -1;
        } */
        int n1=nums1.size(),n2=nums2.size();
        int i=0,j=0;
        while(i<n1 && j<n2){
            if(nums1[i]==nums2[j]){
                return nums1[i];
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return -1;
    }
};
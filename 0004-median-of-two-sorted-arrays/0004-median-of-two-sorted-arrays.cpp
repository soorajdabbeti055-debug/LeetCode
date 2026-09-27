class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l=nums1.size()+nums2.size();
            int p1=0, p2=0,p=0,c=0;
            for(int i=0;i<=l/2;i++){
               p=c;
                if(p1 < nums1.size() && 
   (p2 >= nums2.size() || nums1[p1] <= nums2[p2])){
                    c=nums1[p1];
                    p1++;
                }
                else{
                    c=nums2[p2];
                    p2++;
                }
       }
       if(l%2==1){
           return c;
       }
        return (p+c)/2.0;
    }
};
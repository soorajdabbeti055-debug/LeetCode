class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count=0,t=k*threshold,c=0;
        for(int i=0;i<k;i++){
            c+=arr[i];
        }
        if(c>=t){
            count++;
        }
        for(int i=k;i<arr.size();i++){
            c+=arr[i]-arr[i-k];
            if(c>=t){
                count++;
            }
        }
        return count;
    }
};
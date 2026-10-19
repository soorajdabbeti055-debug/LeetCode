class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>ans(n,0);
        if(k==0) return ans;
        for(int i=0;i<n;i++){
            int cs=0;
            if(k>0){
                for(int j=1;j<=k;j++){
                    cs+=code[(i+j)%n];
                }
            }
            else{
                for(int j=1;j<=abs(k);j++){
                    cs+=code[(i-j+n)%n];
                }
            }
            ans[i]=cs;
        }
        return ans;
       /*  if(k==0){
            for(int i=0;i<n;i++){
                ans.push_back(0);
            }
        }
        else if(k>0){
            for(int i=0;i<n;i++){
                int cs=0,le=0,j=i+1,m=k;
                while(m!=0){
                   if(j<n){
                    cs+=code[j];
                    j++;
                   }
                   else{
                    cs+=code[le];
                    le++;
                   }
                   m--;
                }
                ans.push_back(cs);
            }
        }
        else{
            for(int i=0;i<n;i++){
                int cs=0,j=i
            }
        } */
    }
};
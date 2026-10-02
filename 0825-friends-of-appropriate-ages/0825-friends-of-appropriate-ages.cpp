class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        int n=ages.size(),count=0;
       /*  for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j!=i){
                    if(ages[j]<=0.5*ages[i]+7 || ages[j]>ages[i] || (ages[j]>100 && ages[i]<100)){
                        continue;
                    }
                    else{
                        count++;
                    }
                }
            }
        }
        return count; */
        sort(ages.begin(),ages.end());
        int l=0,r=0;
        for(int i=0;i<n;i++){
            int a=ages[i];
            if(a<=14) continue;
            while(l<n && ages[l]<=0.5*ages[i]+7){
                l++;
            }
            while(r+1<n && ages[r+1]<=a){
                r++;
            }
            if(r>=l){
                count+=(r-l+1)-1;
            }
        }
        return count;
    }
};
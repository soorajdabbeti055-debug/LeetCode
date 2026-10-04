class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ml=0,l=0,m=0,n=fruits.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
                mp[fruits[i]]++;

                while(mp.size()>2){
                    mp[fruits[l]]--;
                    if(mp[fruits[l]]==0){
                        mp.erase(fruits[l]);
                    }
                    l++; 
                }
                ml=max(ml,i-l+1);
        }
        return ml;
    }
};
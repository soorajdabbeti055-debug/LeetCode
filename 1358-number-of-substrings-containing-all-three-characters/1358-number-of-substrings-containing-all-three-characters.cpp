class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size(),count=0;
        unordered_map<char,int>mp;
       /*  for(char ns:s){
            mp[ns]++;
            if(mp['a']!=0 && mp['b']!=0 && mp['c']!=0){
                count++;
            }
        }
        for(int i=0;i<n;i++){
            char sn=s[i];
            mp[sn]--;
            if(mp['a']!=0 && mp['b']!=0 && mp['c']!=0){
                count++;
            }
            else{
                return count;
            } 
        }
        return count; */
        int l=0;
        for(int r=0;r<n;r++){
            char sn=s[r];
            mp[sn]++;
            if(mp['a']!=0 && mp['b']!=0 && mp['c']!=0){
                while(mp['a']!=0 && mp['b']!=0 && mp['c']!=0){
                    count+=(n-r);
                    mp[s[l]]--;
                    l++;
                }
            }
        }
        return count;
    }
};
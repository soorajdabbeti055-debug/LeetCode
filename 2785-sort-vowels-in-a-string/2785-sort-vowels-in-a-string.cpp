class Solution {
public:
    string sortVowels(string s) {
        unordered_map<char,int>mp;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
               s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                mp[s[i]]++;
               }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
                s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
               if(mp['A']>0){
                s[i]='A';
                mp['A']--;
               }
               else if(mp['E']>0){
                s[i]='E';
                 mp['E']--;
               }
               else if(mp['I']>0){
                s[i]='I';
                 mp['I']--;
               }
               else if(mp['O']>0){
                s[i]='O';
                 mp['O']--;
               }
               else if(mp['U']>0){
                s[i]='U';
                 mp['U']--;
               }
               else if(mp['a']>0){
                s[i]='a';
                 mp['a']--;
               }
               else if(mp['e']>0){
                s[i]='e';
                 mp['e']--;
               }
               else if(mp['i']>0){
                s[i]='i';
                mp['i']--;
               }
               else if(mp['o']>0){
                s[i]='o';
                mp['o']--;
               }
               else{
                s[i]='u';
                mp['u']--;
               }
            }
        }
        return s;
    }
};
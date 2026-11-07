class Solution {
public:
    int maxVowels(string s, int k) {
        int l=k,n=s.size(),v=0,vc=0,se=0;
        for(int i=0;i<n;i++){
            if(l==0){
                if(s[se]=='a' || s[se]=='e' || s[se]=='i' || s[se]=='o' || s[se]=='u'){
                    v--;
                    l++;
                    se++;
                }
                else{
                    l++;
                    se++;
                }
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                    v++;
                    l--;
                }
                else{
                    l--;
                }
            }
            else{
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                    v++;
                    l--;
                }
                else{
                    l--;
                }
            }
            vc=max(vc,v);
        }
        return vc;
    }
};
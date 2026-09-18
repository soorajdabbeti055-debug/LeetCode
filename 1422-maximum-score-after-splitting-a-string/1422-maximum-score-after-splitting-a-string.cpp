class Solution {
public:
    int maxScore(string s) {
        int n1=0,n0=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                n1+=1;
            }
        }
        int m=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0'){
                n0+=1;
            }
            else{
                n1-=1;
            }
            m=max(m,n1+n0);
        }
        return m;
    }
};
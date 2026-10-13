class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool a[26];   
        for(char s:sentence){
            a[s-'a']=true;
        }
        for(int i=0;i<26;i++){
            if(a[i]==0){
                return false;
            }
        }
        return true;
    }
};
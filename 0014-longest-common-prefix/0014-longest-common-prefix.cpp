class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())return "";
        sort(strs.begin(),strs.end());
        string s="";
        string f=strs.front(),e=strs.back();
        for(int i=0;i<f.size();i++){
            if(f[i]==e[i]){
               s+=f[i];
            }
            else{
                break;
            }
        }
        return s;
    }
};
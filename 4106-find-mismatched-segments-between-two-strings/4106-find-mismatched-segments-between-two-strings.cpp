class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>>s;
        string ss1,ss2;
        int n=s1.size();
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                ss1.push_back(s1[i]);
                ss2.push_back(s2[i]);
            }
            else{
                if(ss1!=""){
                    s.push_back({ss1,ss2});
                    ss1="";
                    ss2="";
                }
            }
        }
        if(ss1!=""){
            s.push_back({ss1,ss2});
        }
        return s;
    }
};
class Solution {
public:
    string removeDuplicateLetters(string s) {
      vector<int>c(26,0);
      for(char ch:s){
        c[ch-'a']++;
      }
      vector<bool>ins(26,false);
      string res="";
      for(char cn:s){
        c[cn-'a']--;
        if(ins[cn-'a']){
            continue;
        }
        while(!res.empty() && res.back()>cn && c[res.back()-'a']>0){
            ins[res.back()-'a']=false;
            res.pop_back();
        }
        res.push_back(cn);
        ins[cn-'a']=true;
      }
      return res;
    }
};
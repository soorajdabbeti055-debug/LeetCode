class Solution {
public:
    int maxDepth(string s) {
        stack<int>st;
        int m=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push('(');
                m = max(m, (int)st.size());
            }
            else if(s[i]==')'){
                st.pop();
            }
        }
        return m;
    }
};
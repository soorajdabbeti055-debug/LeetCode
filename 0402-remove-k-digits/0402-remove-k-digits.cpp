class Solution {
public:
    string removeKdigits(string num, int k) {
        int s=num.size();
        stack<char>st;
        for(int i=0;i<s;i++){
            while(k>0 && !st.empty() && st.top()>num[i]){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k > 0 && !st.empty()) {
            st.pop();
            k--;
        }
        string ae="";
        while(!st.empty()){
            ae.push_back(st.top());
            st.pop();
        }
        reverse(ae.begin(),ae.end());
        int nzIdx=0;
        while(nzIdx<ae.size() && ae[nzIdx]=='0'){
            nzIdx++;
        }
        ae=ae.substr(nzIdx);
        if(ae.empty()){
            return "0";
        }
        return ae;
    }
};
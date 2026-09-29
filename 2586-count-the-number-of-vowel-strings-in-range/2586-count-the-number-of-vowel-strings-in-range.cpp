class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        unordered_set<char>st={'a','e','i','o','u'};
        for(int i=left;i<=right;i++){
            int w=words[i].size()-1;
            if(st.count(words[i][0]) && st.count(words[i][w])){
                count++;
            }
        }
        return count;
    }
};
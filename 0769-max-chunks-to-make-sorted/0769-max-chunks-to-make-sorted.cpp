class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        stack<int>st;
        for(int i=0;i<arr.size();i++){
        if(st.empty()){
            st.push(arr[i]);
        }
        else if(arr[i]>st.top()){
            st.push(arr[i]);
        }
        else {
    int maxi = st.top();

    while(!st.empty() && arr[i] < st.top()) {
        maxi = max(maxi, st.top());
        st.pop();
    }

    st.push(maxi);
}
    }
    return st.size();
    }
};
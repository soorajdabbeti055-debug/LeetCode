class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
      /*   vector<int>v;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int num=stoi(nums[i]);
            v.push_back(num);
        }
        sort(v.begin(),v.end());
        return to_string(k-1); */
        auto cmp=[](const string& a,const string& b){
            if(a.length()!=b.length()){
                return a.length()<b.length();
            }
            return a<b;
        };
        sort(nums.begin(),nums.end(),cmp);
        return nums[nums.size()-k];
    }
};
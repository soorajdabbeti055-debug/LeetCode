class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        vector<int>freq;
        for(const auto&[num,count]:mp){
            freq.push_back(count);
        }
        sort(freq.begin(),freq.end());
        int uq=freq.size();
        for(int x:freq){
            if(k>=x){
                k-=x;
                uq--;
            }
            else{
                break;
            }
        }
        return uq;
    }
};
class Solution {
public:
    double average(vector<int>& salary) {
    int miv=salary[0],mav=salary[0],n=salary.size();
    double sum=0;
    for(int num:salary){
        miv=min(miv,num);
        mav=max(mav,num);
        sum+=num;
    }
    return (sum-miv-mav)/(n-2);
    }
};
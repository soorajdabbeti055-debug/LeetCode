class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
  /*    sort(prices.begin(),prices.end());
     if((prices[0]+prices[1])<=money){
        return money-(prices[0]+prices[1]);
     }
     return money; */
     int m1=INT_MAX;
     int m2=INT_MAX;
     for(int p:prices){
        if(p<m1){
            m2=m1;
            m1=p;
        }
        else if(p<m2){
            m2=p;
        }
     }
     int t=m1+m2;
     if(t<=money){
        return money-t;
     }
     return money;
    }
};
class Solution {
public:
    int pivotInteger(int n) {
       /* if (n == 1) return 1;

        int l = 1, r = n;
        int sum_l = 1, sum_r = n;

        while (l < r) {
            if (sum_l < sum_r) {
                l++;
                sum_l += l;
            } else {
                r--;
                sum_r += r;
            }
        }

        return (sum_l == sum_r) ? l : -1; */
        int rs=0,ls=0,ts=(n*(n+1))/2;
        for(int x=1;x<=n;x++){
            ls+=x;
            rs=ts-ls+x;
            if(ls==rs){
                return x;
            }
        }
        return -1;
    }
};
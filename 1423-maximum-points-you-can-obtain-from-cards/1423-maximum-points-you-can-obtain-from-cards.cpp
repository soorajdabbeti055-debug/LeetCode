class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size(),ts=0;
        for(int num:cardPoints){
            ts+=num;
        }
        int w=n-k,mi=0;
        if(w==0) return ts;
        int cw=0,cmw=0;
        for(int i=0;i<w;i++){
            cw+=cardPoints[i];
        }
        cmw=cw;
        for(int i=w;i<n;i++){
            cw+=cardPoints[i];
            cw-=cardPoints[i-w];
            cmw=min(cmw,cw);
        }
        return ts-cmw;
    }
};
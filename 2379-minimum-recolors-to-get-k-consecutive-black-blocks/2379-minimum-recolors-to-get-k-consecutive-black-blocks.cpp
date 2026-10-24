class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size(),count=0,l=0,ac=k;
        for(int i=0;i<n;i++){
            if(blocks[i]=='W'){
                count++;
            }
            if(i+1>=k){
                ac=min(ac,count);
                if(blocks[l]=='W'){
                    count--;
                }
                l++;
            }
        }
        return ac;
    }
};
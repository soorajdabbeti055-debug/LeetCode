class Solution {
public:
    int maxPower(string s) {
     int ma=1,cm=1;
     if(s.empty()) return 0;
     for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            cm++;
        }
        else{
            ma=max(ma,cm);
            cm=1;
        }
     }  
     return max(ma,cm); 
    }
};
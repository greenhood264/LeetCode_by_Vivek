class Solution {
public:
    int minAddToMakeValid(string s) {
         int cnt1=0;
        int cnt2=0;
        for(char ch:s){
            if(ch=='(') cnt1++;
            else if(ch==')' & cnt1>0) cnt1--;
            else cnt2++;
        }
        return abs(cnt1+cnt2);
        
    }
};
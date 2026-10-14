class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(1LL*9*num<sum) return "";
        int cnt=sum/9;
        string ans;
        for(int i=0;i<cnt;i++){
            ans+='9';
            num--;
            sum-=9;
        }
        while(num--){
            ans+='0'+sum;
            sum-=sum;
        }
        return ans;
    }
};
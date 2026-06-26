class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int og=x;
        int pal=0;
        while(x!=0){
            int digit=x%10;
            x=x/10;
            if(pal<INT_MIN/10 || pal>INT_MAX/10) return 0;
            pal=(pal*10)+digit;
        }
        return(pal==og);
    }
};
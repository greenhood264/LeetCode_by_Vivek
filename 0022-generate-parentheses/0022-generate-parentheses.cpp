class Solution {
private:
    void paranthesishelper(int open_rem,int close_rem,string s, vector<string>& ans){
        if(open_rem==0 && close_rem==0){
            ans.push_back(s);
            return ;
        }
        if(open_rem>0){
            paranthesishelper(open_rem-1,close_rem,s+'(',ans);
        }
        if(close_rem>open_rem){
            paranthesishelper(open_rem,close_rem-1,s+')',ans);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s="";
        paranthesishelper(n,n,s,ans);
        return ans;
    }
};
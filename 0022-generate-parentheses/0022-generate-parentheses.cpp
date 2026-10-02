class Solution {
public:
    vector<string> ans;
    void func(int open,int close,int n,string res,vector<string>& ans){
        if(open == n && close == n){
            ans.push_back(res);
            return;
        }
        if(open<n){
            res.push_back('(');
            func(open+1,close,n,res,ans);
            res.pop_back();
        }
        if(close<open){
            res.push_back(')');
            func(open,close+1,n,res,ans);
            res.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string res = "";
        func(0,0,n,res,ans);
        return ans;
    }
};
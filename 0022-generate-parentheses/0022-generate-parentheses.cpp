class Solution {
public:
    vector<string> ans;
    void func(int n,int open,int close,vector<string>& ans,string res){
        if(open==n && close==n) {
            ans.push_back(res);
            return;
        }
        if(open<n){
            res.push_back('(');
            func(n,open+1,close,ans,res);
            res.pop_back();
        } 
        if(close<open){
            res.push_back(')');
            func(n,open,close+1,ans,res);
            res.pop_back();
        } 
        return;
    }
    vector<string> generateParenthesis(int n) {
        string res = "";
        func(n,0,0,ans,res);
        return ans;
    }
};
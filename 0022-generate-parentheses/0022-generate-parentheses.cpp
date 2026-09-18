class Solution {
public:
    vector<string> ans;
    void func(int n,int open,int close,vector<string>& ans,string res){
        if(open==n && close==n) {
            ans.push_back(res);
            return;
        }
        if(open<n) func(n,open+1,close,ans,res+"(");
        if(close<open) func(n,open,close+1,ans,res+")");
        return;
    }
    vector<string> generateParenthesis(int n) {
        string res = "";
        func(n,0,0,ans,res);
        return ans;
    }
};
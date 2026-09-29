class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int high=0;
        for(int i=high;i<s.size();i++){
            string rev = "";
            while(high<s.size() && s[high]!=' '){
                rev += s[high];
                high++;
            }
            reverse(rev.begin(),rev.end());
            ans += rev;
            if(high!=s.size()) ans += " ";
            high++;
            if(high>=s.size()) break;
        }
        return ans;
    }
};
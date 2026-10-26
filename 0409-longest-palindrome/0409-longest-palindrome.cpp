class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        int ans=0,m=0;
        for(int i=0;i<s.size();i++) mp[s[i]]++;
        for(auto ch:mp){
            if(ch.second%2==0){
                ans += ch.second;
            }
            else {
                ans += ch.second-1;
                m = 1;
            }
        }
        if(m) ans += 1;
        return ans;
    }
};
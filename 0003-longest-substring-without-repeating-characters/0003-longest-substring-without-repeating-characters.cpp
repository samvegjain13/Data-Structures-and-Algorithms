class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0, high = 0, ans = 0;
        unordered_map<char, int> mp;
        for (high = 0; high < s.size(); high++) {
            mp[s[high]]++;
            while (mp.size() != high - low + 1) {
                mp[s[low]]--;
                if (mp[s[low]] == 0)
                    mp.erase(s[low]);
                low++;
            }
            ans = max(ans, high - low + 1);
        }
        return ans;
    }
};
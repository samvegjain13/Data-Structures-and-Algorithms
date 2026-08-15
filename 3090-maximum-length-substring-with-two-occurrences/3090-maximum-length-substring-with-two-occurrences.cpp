class Solution {
public:
    int maximumLengthSubstring(string s) {
        int low=0,high=0,ans=0,maxi=0;
        vector<int> hash(26,0);
        for(high=0;high<s.size();high++){
            hash[s[high] - 'a']++;
            while(hash[s[high] - 'a']>2){
                hash[s[low]-'a']--;
                low++;  
            }
            ans = max(ans,high-low+1);
        }
        return ans;
    }
};
class Solution {
public:
    int characterReplacement(string s, int k) {
        int low=0,high=0,maxi=0,diff=0,ans=0,len=0;
        vector<int> hash(26,0);
        for(int high=0;high<s.size();high++){
            hash[s[high] - 'A']++;
            len = high-low+1;
            maxi = *max_element(hash.begin(),hash.end());
            diff = len - maxi;
            while(diff>k){
                hash[s[low] - 'A']--;
                low++;
                len = high-low+1;
                maxi = *max_element(hash.begin(),hash.end());
                diff = len - maxi;
            }
            ans = max(ans,high-low+1);
        }
        return ans;
    }
};
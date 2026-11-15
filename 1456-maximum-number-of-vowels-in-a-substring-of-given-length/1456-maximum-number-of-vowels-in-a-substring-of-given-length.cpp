class Solution {
public:
    bool isvowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'o' || ch == 'i' || ch == 'u';
    }
    int maxVowels(string s, int k) {
        int c=0,low=0,ans=0;
        for(int high=0;high<s.size();high++){
            if(isvowel(s[high])) c++;
            if(high-low+1>k){
                if(isvowel(s[low])) c--;
                low++;    
            }
            ans = max(ans,c);
        }
        return ans;
    }
};
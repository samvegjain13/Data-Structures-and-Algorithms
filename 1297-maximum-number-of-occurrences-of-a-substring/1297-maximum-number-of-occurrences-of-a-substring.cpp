class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        unordered_map<string,int>mp1;
        int maxi=0;
        for(int i=0;i+minSize<=s.size();i++){
            unordered_map<char,int> mp2;
            for(int j=i;j<i+minSize;j++){
                mp2[s[j]]++;
            }
            if(mp2.size()>maxLetters) continue;
                mp1[s.substr(i,minSize)]++;
                maxi = max(maxi,mp1[s.substr(i,minSize)]);
        }
        return maxi;
    }
};
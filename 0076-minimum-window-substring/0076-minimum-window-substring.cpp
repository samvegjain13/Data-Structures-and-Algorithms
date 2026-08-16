class Solution {
public:
    bool func(vector<int>& hash1,vector<int>&hash2){
        for(int i=0;i<256;i++){
            if(hash1[i]<hash2[i]) return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        vector<int> hash1(256,0),hash2(256,0);
        int low=0,high=0,len=0,start=0,res = INT_MAX;
        for(int i=0;i<t.size();i++){
            hash2[t[i]]++;
        }
        for(high=0;high<s.size();high++){
            hash1[s[high]]++;
            while(func(hash1,hash2)){
                len = high-low+1;
                if(len<res){
                    res = len;
                    start = low;
                }
                hash1[s[low]]--;
                low++;
            }
        }
        if(res==INT_MAX) return "";
        return s.substr(start,res);
    }
};
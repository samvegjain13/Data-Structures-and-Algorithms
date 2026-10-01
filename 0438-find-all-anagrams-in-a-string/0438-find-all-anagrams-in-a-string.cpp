class Solution {
public:
bool func(string p,vector<int>& hash1,vector<int>& hash2){
    for(int i=0;i<p.size();i++){
        if(hash1[p[i]-'a']!=hash2[p[i]-'a']) return false;
    }
    return true;
}
    vector<int> findAnagrams(string s, string p) {
        vector<int> hash1(26),hash2(26),v;
        int low=0,high=0;
        for(int i=0;i<p.size();i++){
            hash1[p[i]-'a']++;
        }
        for(high=0;high<s.size();high++){
            hash2[s[high]-'a']++;
            if(high-low+1>p.size()){
                hash2[s[low]-'a']--;
                low++;
            }
            if(func(p,hash1,hash2)) v.push_back(low);
        }
        return v;
    }
};
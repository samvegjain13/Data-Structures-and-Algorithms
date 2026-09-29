class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int low=0,high=0;
        for(high=low;high<s.size();high++){
            if(s[high]==' '){
                reverse(s.begin()+low,s.begin()+high);
                low = high+1;
            }
             else if(high==s.size()-1) reverse(s.begin()+low,s.end());
        }
        return s;
    }
};
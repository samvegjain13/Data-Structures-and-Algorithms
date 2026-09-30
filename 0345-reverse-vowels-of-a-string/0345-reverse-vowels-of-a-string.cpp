class Solution {
public:
    string reverseVowels(string s) {
        int low=0,high=s.size()-1;
        unordered_set<char> st = {'a','A','e','E','i','o','u','I','O','U'};
        while(low<high){
            if(st.find(s[low])!=st.end() && st.find(s[high])!=st.end()){
                swap(s[low],s[high]);
                low++;
                high--;
            }
            else if(st.find(s[low])==st.end()) low++;
            else high--;
        }
        return s;
    }
};
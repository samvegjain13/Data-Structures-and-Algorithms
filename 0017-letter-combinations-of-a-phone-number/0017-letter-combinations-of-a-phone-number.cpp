class Solution {
public:
unordered_map<char,string> hash;
void fun(string digits,int idx,string diary,vector<string>& res){
    if(idx==digits.size()){
        res.push_back(diary);
        return;
    }
    string choice = hash[digits[idx]];
    for(int i=0;i<choice.size();i++){
        diary.push_back(choice[i]);
        fun(digits,idx+1,diary,res);
        diary.pop_back();
    }
    return;
}
    vector<string> letterCombinations(string digits) {
       
hash['2'] = "abc";
hash['3'] = "def";
hash['4'] = "ghi";
hash['5'] = "jkl";
hash['6'] = "mno";
hash['7'] = "pqrs";
hash['8'] = "tuv";
hash['9'] = "wxyz";
        vector<string> res;
        string diary = "";
        fun(digits,0,diary,res);
        return res;
    }
    
};
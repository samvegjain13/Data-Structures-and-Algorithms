class Solution {
public:
void fun(vector<int>& candidates,vector<int>& diary,vector<vector<int>>& ans,int target,int sum,int idx){
    if(idx==candidates.size()){
        if(sum==target) ans.push_back(diary);
        return;
    }
    fun(candidates,diary,ans,target,sum,idx+1);
    if(sum<=target){
        diary.push_back(candidates[idx]);
        sum += candidates[idx];
        fun(candidates,diary,ans,target,sum,idx);
        diary.pop_back();
        sum -= candidates[idx];
    } return;
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> diary;
        vector<vector<int>> ans;
        fun(candidates,diary,ans,target,0,0);
        return ans;
    }
};
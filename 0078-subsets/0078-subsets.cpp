class Solution {
public:
vector<vector<int>> ans;
    void func(vector<int>temp,int ind,vector<int>nums){
        if(ind==nums.size()){
            ans.push_back(temp);
            return;
        }
        func(temp,ind+1,nums);
        temp.push_back(nums[ind]);
        func(temp,ind+1,nums);
        temp.pop_back();
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        func(temp,0,nums);
        // int ss, n = nums.size();
        // ss = 1<<n;
        // for(int i=0;i<ss;i++){
        //     vector<int>v;
        //     for(int j=0;j<n;j++){
        //         if(i & (1<<j)) v.push_back(nums[j]); 
        //     }
        //     ans.push_back(v);
        // }
        return ans;
    }
};
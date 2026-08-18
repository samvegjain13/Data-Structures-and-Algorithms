class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int ans=-1;
        vector<int> hash(51,0);
        for(int i=0;i<nums.size();i++) hash[nums[i]]++;
        if(hash.size()==1) return nums[0];
        else if(k==nums.size()) ans = *max_element(nums.begin(),nums.end());
        else if(k==1) {
            for(int i=0;i<nums.size();i++){
                if(hash[nums[i]]==1) ans = max(ans,nums[i]);
            }
        }
        else {
            if(hash[nums[0]]==1 && hash[nums[nums.size()-1]]==1) ans = max(nums[0],nums[nums.size()-1]);
            else if(hash[nums[0]]==1) ans = nums[0];
            else if(hash[nums[nums.size()-1]]==1) ans = nums[nums.size()-1];
            else;
        } 
        return ans;
    }
};
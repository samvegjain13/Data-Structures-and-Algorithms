class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int curr = nums[0],maxi = nums[0],mini=nums[0];
        for(int i=1;i<nums.size();i++){
            curr = max(nums[i],curr+nums[i]);
            maxi = max(maxi,curr);
        } curr = nums[0];
        for(int i=1;i<nums.size();i++){
            curr = min(nums[i],curr+nums[i]);
            mini = min(mini,curr);
        }
        return max(maxi,abs(mini));
    }
};
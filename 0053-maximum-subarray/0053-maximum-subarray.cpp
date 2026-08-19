class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i,sum1=nums[0],sum2=nums[0];
        if(nums.size()==1) return nums[0];
        for(i=1;i<nums.size();i++){
            sum1=max(nums[i],sum1+nums[i]);
            sum2=max(sum1,sum2);
        } return sum2;
    }
};
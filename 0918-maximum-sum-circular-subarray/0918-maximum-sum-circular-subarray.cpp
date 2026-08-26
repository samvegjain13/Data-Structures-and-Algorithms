class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size(),currsum1 = nums[0], currsum2 = nums[0], maxsum = nums[0], minsum = nums[0], sum = nums[0];
        for(int i=1;i<n;i++){
            currsum1 = max(nums[i],currsum1 + nums[i]);
            maxsum = max(maxsum,currsum1);

            currsum2 = min(nums[i],currsum2 + nums[i]);
            minsum = min(minsum,currsum2);

            sum += nums[i];
        }
        return sum-minsum!=0?max(maxsum,sum-minsum):maxsum;     
    }
};
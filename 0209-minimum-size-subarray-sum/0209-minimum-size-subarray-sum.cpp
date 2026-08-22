class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0,high=0,ans=INT_MAX,sum=0;
        for(int high=0;high<nums.size();high++){
            sum += nums[high];
            while(sum>=target){
                ans = min(ans,high-low+1);
                sum -= nums[low];
                low++;
            }
        }
        return ans==INT_MAX?0:ans;
    }
};
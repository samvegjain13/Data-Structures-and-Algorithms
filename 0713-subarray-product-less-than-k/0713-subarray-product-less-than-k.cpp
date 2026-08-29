class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int low=0,high=0,ans=0,prod=1;
        if(nums.size()==1){
            if(nums[0]>=k) return 0;
            else return 1;
        } 
        for(high=0;high<nums.size();high++){
            prod *= nums[high];
            while(prod>=k){
                prod /= nums[low];
                low++;
            }
            ans += (high-low+1);
        }
        return ans;
    }
};
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int low=0,high=0,ans=0,c=0;
        for(int high=0;high<nums.size();high++){
            if(nums[high]==0) c++;
            while(c>1){
                if(nums[low]==0) c--;
                low++;
            }
            ans = max(ans,high-low);
        }
        return ans;
    }
};
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low=0,high=0,ans=0,c=0;
        for(high=0;high<nums.size();high++){
            if(nums[high]==0) c++;
            while(c>k){
                if(nums[low]==0) c--;
                low++;
            }
            ans = max(ans,high-low+1);
        }
        return ans;
    }
};
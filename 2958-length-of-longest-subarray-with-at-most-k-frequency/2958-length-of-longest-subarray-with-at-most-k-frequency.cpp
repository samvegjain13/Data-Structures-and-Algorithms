class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int low=0,high=0,ans=0;
        unordered_map<int,int> mp;
        for(high=0;high<nums.size();high++){
            mp[nums[high]]++;   
            while(mp[nums[high]]>k){
                mp[nums[low]]--;
                low++;
            }
            ans = max(ans,high-low+1);
        }
        return ans;
    }
};
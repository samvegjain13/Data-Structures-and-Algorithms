class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefixsum = 0, c = 0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[prefixsum]++;
            prefixsum += nums[i];
            if(mp[prefixsum-k]) c += mp[prefixsum-k];
        }
        return c;
    }
};
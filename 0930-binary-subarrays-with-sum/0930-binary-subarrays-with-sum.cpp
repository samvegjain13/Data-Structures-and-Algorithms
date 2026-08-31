class Solution {
public:
    int func(vector<int>& nums, int goal) {
        if(goal<0) return 0;
        int n=nums.size(),sum=0,c=0,l=0,r=0;
        while(r<n){
            sum+=nums[r];
            while(sum>goal){
                sum -= nums[l];
                l++;
            }
            c+=r-l+1;
            r++;
        }
        return c;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return func(nums,goal) - func(nums,goal-1);
    }
};
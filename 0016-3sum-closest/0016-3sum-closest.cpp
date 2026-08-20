class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       sort(nums.begin(),nums.end());
       int n = nums.size(),ans = 0,mindiff = INT_MAX,diff = 0,sum = 0;
       for(int i=0;i<n-2;i++){
        int left = i+1,right = n-1;
        while(left<right){
            sum = nums[i]+nums[left]+nums[right];
            diff = abs(sum-target);
            if(mindiff>diff) {
                mindiff = diff;
                ans = sum;
            }
            if(sum==target) return ans;
            else if(sum>target) right--;
            else left++;
        }
       }
       return ans;
    }
};
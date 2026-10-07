class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int c=0;
        if(nums.size()<3) return 0;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=2;i--){
            int low=0,high=i-1;
            while(low<high){
                if(nums[low] + nums[high] > nums[i]){
                    c += (high-low);
                    high--;
                }
                else low++;
            }
        }
        return c;
    }
};
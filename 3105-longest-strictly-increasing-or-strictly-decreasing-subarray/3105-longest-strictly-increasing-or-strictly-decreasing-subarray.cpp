class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc=1,dec=1,maxi1=1,maxi2=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                inc++;
                maxi1 = max(maxi1,inc);
                dec=1;
            } 
            else if(nums[i]<nums[i-1]){
                dec++;
                maxi2 = max(maxi2,dec);
                inc=1;
            }
            else {
                inc=1;
                dec=1;
            }
        }
        return max(maxi1,maxi2);
    }
};
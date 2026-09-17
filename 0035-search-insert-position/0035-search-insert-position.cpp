class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i,lb;
        for(i=0;i<nums.size();i++){
            if(nums[i]>=target){
                lb=i;
                break;
            }
        } return lb;
    }
};
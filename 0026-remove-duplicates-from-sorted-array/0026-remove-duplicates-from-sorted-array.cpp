class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(),i=0,j=1,c=1;
        while(j<n){
            if(nums[i] != nums[j]){
                nums[++i] = nums[j];
                c++;
            }
            j++;
        }
        return c;
    }
};
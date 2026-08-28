class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size(),i=0,j=n-1,k=n-1;
        vector<int> v(n);
        while(i<=j){
            if(nums[i]*nums[i] > nums[j]*nums[j]){
                v[k] = nums[i]*nums[i];
                k--;
                i++;
            }
            else {
                v[k] = nums[j]*nums[j];
                k--;
                j--;
            }
        }
        return v;
    }
};
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i,prod1=nums[0],prod2=nums[0],res=nums[0];
        for(i=1;i<nums.size();i++){
            int temp1 = prod1 , temp2 = prod2;
            prod1 = max(nums[i],max(temp1*nums[i],temp2*nums[i]));
            prod2 = min(nums[i],min(temp1*nums[i],temp2*nums[i]));
            res = max(res,max(prod1,prod2));
        } 
        
        return res;
    }
};
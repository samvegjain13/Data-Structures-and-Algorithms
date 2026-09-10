class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i,sum=0,n;
        n=nums.size();
       int m=(n*(n+1))/2;
        for(i=0;i<n;i++){
            sum+=nums[i];
        } return m-sum;
    }
};
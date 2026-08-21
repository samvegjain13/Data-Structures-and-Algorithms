class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int i,j=0,c1=0,c2=0,c3=0;
        // for(i=0;i<nums.size();i++){
        //     if(nums[i]==0){
        //         c1++;
        //     } else if(nums[i]==1){
        //         c2++;
        //     } else c3++;
        // }
        // for(i=0;i<nums.size();i++){
        //     if(i<c1){
        //         nums[i]=0;
        //     } else if(i<c1+c2){
        //         nums[i]=1;
        //     } else nums[i]=2;
        // } 
        // for(i=0;i<nums.size();i++){
        //     cout<<nums[i];
        // }


        int n=nums.size(),low=0,mid=0,high=n-1;

        while(mid<=high){
            if(nums[mid] == 0) {
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1) mid++;
            else {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};
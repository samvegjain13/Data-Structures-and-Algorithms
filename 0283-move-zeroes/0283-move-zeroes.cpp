class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1){
            cout<<"0";
            return;
        }
        int i,j;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0){   
                break;
            }
        } for(j=i+1;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
        }

    }
};
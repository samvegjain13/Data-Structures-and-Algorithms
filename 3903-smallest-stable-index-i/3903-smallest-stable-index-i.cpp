class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        if(nums.size()==1) return 0;
        int maxi=0,mini=0;
        for(int i=0;i<nums.size();i++){
            maxi = *max_element(nums.begin(),nums.begin()+i+1);
            mini = *min_element(nums.begin()+i,nums.end());
            if(k >= maxi-mini) return i;
        }
        return -1;
    }
};
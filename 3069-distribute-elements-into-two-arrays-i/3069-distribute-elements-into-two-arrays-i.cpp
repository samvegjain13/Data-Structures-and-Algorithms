class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> a1,a2,ans(nums.size(),0);
        a1.push_back(nums[0]);
        a2.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(a1.back() > a2.back()){
                a1.push_back(nums[i]);
            } else {
                a2.push_back(nums[i]);
            }
        }
        int i=0,j=0;
        while(i<a1.size()){
            ans[i] = a1[i];
            i++;
        }
        while(j<a2.size()){
            ans[i+j] = a2[j];
            j++;
        }
        
        return ans;
    }
};
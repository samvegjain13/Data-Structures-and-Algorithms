class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> hash(101,0);
        int c=1;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(int i=k;i<hash.size();i+=k){
            if(hash[i]==0) return i;
            c++;
        }
        return k*c;
    }
};
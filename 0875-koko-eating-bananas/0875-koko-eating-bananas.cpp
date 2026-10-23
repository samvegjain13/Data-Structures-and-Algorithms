class Solution {
public:
    bool fun(vector<int>&piles,int h,int mid){
        for(int i=0;i<piles.size();i++){
            if(piles[i]%mid == 0) h -= piles[i]/mid;
            else h -= (piles[i]/mid)+1;
            if(h<0) return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1,high = *max_element(piles.begin(),piles.end()),ans=0;
        while(low<=high){
            int mid = (low+high)/2;
            if(fun(piles,h,mid)){
                ans = mid;
                high = mid-1;
            } else low = mid+1;
        }
        return ans;
    }
};
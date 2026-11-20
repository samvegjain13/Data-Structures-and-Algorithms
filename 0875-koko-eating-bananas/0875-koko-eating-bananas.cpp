class Solution {
public:
    long long fun(vector<int>&piles,int h,int mid){
        long long hr=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]%mid == 0) hr += piles[i]/mid;
            else hr += (piles[i]/mid)+1;
        }
        return hr;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1,high = *max_element(piles.begin(),piles.end()),ans=0;
        while(low<=high){
            int mid = (low+high)/2;
            long long hr = fun(piles,h,mid);
            if(hr<=h){
                ans = mid;
                high = mid-1;
            } else low = mid+1;
        }
        return ans;
    }
};
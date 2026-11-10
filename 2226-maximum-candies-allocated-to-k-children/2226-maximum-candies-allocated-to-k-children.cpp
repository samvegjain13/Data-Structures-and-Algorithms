class Solution {
public:
    long long func(vector<int>& candies, long long k,int mid,long long child){
        for(int i=0;i<candies.size();i++){
            if(candies[i]>=mid){
                child += candies[i]/mid;
            } 
        }
        return child;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int low = 1, high = *max_element(candies.begin(),candies.end()),ans=0;
        while(low<=high){
            int mid = (low+high)/2;
            long long c = func(candies,k,mid,0);
            if(c>=k){
                low = mid+1;
                ans = mid;
            }
            else high = mid-1;
        }
        return ans!=0?ans:(accumulate(candies.begin(),candies.end(),0LL)>=k)?1:0;
    }
};
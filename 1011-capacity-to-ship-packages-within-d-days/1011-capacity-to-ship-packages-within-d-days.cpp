class Solution {
public:
    int fun(vector<int>& weights, int mid){
        int day = 1,load = 0;
        for(int i=0;i<weights.size();i++){
            if(weights[i]+load>mid) {
                day++;
                load = weights[i];
            }
            else load += weights[i];
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = INT_MIN,high = 0,ans = 0;
        for(int i=0;i<weights.size();i++){
            low = max(low,weights[i]);
            high += weights[i];
        }
        while(low<=high){
            int mid = (low+high)/2;
            int day = fun(weights,mid);
            if(day<=days) {
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};
class Solution {
public:
    int func(vector<int>& bloomDay, int m, int k,int c,int mid){
        int cnt=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                cnt++;
                if(cnt==k){
                    c++;
                    cnt = 0;
                }
            }
            else cnt=0;
        }
        return c;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int ans = -1;
        if((long)m*k>bloomDay.size()) return ans;
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid = (low+high)/2;
            int c = func(bloomDay,m,k,0,mid);
            if(c>=m){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};
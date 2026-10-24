class Solution {
public:
    int hIndex(vector<int>& citations) {
        int low = 0,high = citations.size()-1,h=0;
        while(low<=high){
            int mid = (low+high)/2;
            if(citations[mid]>=citations.size()-mid){
                int a = citations.size()-mid;
                h = max(h,a);
                high = mid-1;
            } 
            else low = mid+1;
        }
        return h;
    }
};
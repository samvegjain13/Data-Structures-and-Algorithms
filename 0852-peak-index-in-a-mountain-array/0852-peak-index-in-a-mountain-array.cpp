class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0,high=arr.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]) return mid;
            else if(mid>0 && arr[mid]<arr[mid-1]) high = mid;
            else low = mid;
        }
        return 0;
    }
};
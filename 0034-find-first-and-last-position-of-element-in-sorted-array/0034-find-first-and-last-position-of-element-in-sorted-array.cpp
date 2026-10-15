class Solution {
public:
    int first(vector<int>& arr, int target,int low,int high,int focc){
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid] >= target){
                high = mid-1;
                if(arr[mid]==target) focc = mid;
            } 
            else if(arr[mid] < target) low = mid+1;
        }
        return focc;
    }
    int last(vector<int>& arr, int target,int low,int high,int locc){
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid] > target) high = mid-1;
            else if(arr[mid] <= target){
                low = mid+1;
                if(arr[mid]==target) locc = mid;
            }
        }
        return locc;
    }
    vector<int> searchRange(vector<int>& arr, int target) {
        int focc = first(arr,target,0,arr.size()-1,-1);
        int locc = last(arr,target,0,arr.size()-1,-1);
        return {focc,locc};
    }
};
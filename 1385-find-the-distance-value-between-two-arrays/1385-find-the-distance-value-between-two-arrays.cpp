class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int ans = arr1.size();
        for(int i=0;i<arr1.size();i++){
            int low=0,high = arr2.size()-1;
            while(low<=high){
                int mid = (low+high)/2;
                if(abs(arr1[i]-arr2[mid])<=d) {
                    ans--;
                    break;
                }
                else if(arr2[mid]<arr1[i])low = mid+1;
                else high = mid-1;
            }
        }
        return ans;
    }
};
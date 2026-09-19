class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size(),low=0,high=n-1,area=0;
        while(low<high){
            area = max(area,min(height[low],height[high])*(high-low));
            if(height[low]<=height[high]) low++;
            else high--;
        }
        return area;
    }
};
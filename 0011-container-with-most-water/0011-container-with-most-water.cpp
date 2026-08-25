class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size(),left=0,right=n-1,area=0;
        while(left<right){
            area = max(area,((right-left) * min(height[right],height[left])));
            if(height[left]>height[right]) right--;
            else left++;
        }
        return area;
    }
};
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int min = *min_element(nums1.begin(), nums1.end());
        if (min % 2 == 0) {
            for (int i = 0; i < nums1.size(); i++) {
                if (nums1[i] % 2 != 0) {
                    if (nums1[i] - min >= 1 && (nums1[i] - min) % 2 == 0);
                    else return false;
                }
            }
        } else {
            for (int i = 1; i < nums1.size(); i++) {
                if (nums1[i] % 2 == 0) {
                    if (nums1[i] - min >= 1 && (nums1[i] - min) % 2 != 0);
                    else return false;
                }
            }
        }
        return true;
    }
};
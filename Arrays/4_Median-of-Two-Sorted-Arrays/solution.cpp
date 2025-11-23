class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        size_t m = nums1.size();
        size_t n = nums2.size();
        vector<int> merged;
        merged.reserve(m + n);

        size_t i = 0, j = 0;
        
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) merged.push_back(nums1[i++]);
            else merged.push_back(nums2[j++]);
        }
        while (i < m) merged.push_back(nums1[i++]);
        while (j < n) merged.push_back(nums2[j++]);

        size_t total = merged.size();
        if (total % 2 == 1) {
            return static_cast<double>(merged[total / 2]);
        } else {
            double a = merged[total / 2 - 1];
            double b = merged[total / 2];
            return (a + b) / 2.0;
        }
    }
};

//❗ But complexity = O(n) (not optimal for LeetCode)

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2, -1);   // initialize with [-1, -1]
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                if (res[0] == -1) res[0] = i; // first occurrence
                res[1] = i; // always update last occurrence
            }
        }

        return res;
    }
};

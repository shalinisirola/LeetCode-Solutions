// ✅ Time Complexity = O(n log n)

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        set<int> s(nums.begin(), nums.end());
        if(s.find(target)==s.end()){
            s.insert(target);
        }
        int idx = 0;
        for (int x : s) {
            if (x == target) return idx;
            idx++;
        }
        return idx;
        
    }
};

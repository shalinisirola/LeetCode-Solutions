class Solution {
public:
    bool ls(vector<int>& nums, int num){
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == num) return true;
        }
        return false;
    }

    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        int lcs = 1;

        for(int i = 0; i < n; i++){
            int key = nums[i];
            int cnt = 1;

            // FIX: check next consecutive number
            while(ls(nums, key + 1)){
                key++;
                cnt++;
            }

            lcs = max(lcs, cnt);
        }
        return lcs;
    }
};

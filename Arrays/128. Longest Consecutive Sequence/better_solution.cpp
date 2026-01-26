class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int lcs = 1;
        int currCount = 0;
        int lastNum = INT_MIN;

        sort(nums.begin(), nums.end());

        if(n == 0) return 0;

        for(int i=0; i<n; i++){
            if(nums[i]-1 == lastNum){
                lastNum = nums[i];
                currCount += 1;
            }
            //not required but just for easier understanding
            else if(nums[i] == lastNum){
        
            }
            else if(nums[i] != lastNum){
                currCount = 1;
                lastNum = nums[i];
            }
            lcs = max(lcs, currCount);
        }
        return lcs;
    }
};

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_sum = INT_MIN;
        for(int i=0; i<n; i++){
            int sum = 0;
            for(int j=i; j<n; j++){
                sum = sum + nums[j];
                max_sum = max(max_sum, sum);
            }
        }
        return max_sum;
    }
};

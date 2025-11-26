class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int diff = INT_MAX;
        int res=0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int l=i+1;
            int r=n-1;
            while(l < r){
                int currSum = nums[i]+nums[l]+nums[r];
                if(abs(currSum - target) < diff){
                    diff = abs(currSum-target);
                    res = currSum;
                }
                if(currSum==target){
                    return target;
                }
                else if(currSum<target){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return res;
    }
};

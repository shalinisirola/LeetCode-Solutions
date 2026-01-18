class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count_r = 0;
        int count_w = 0;
        int count_b = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==0) count_r++;
            else if(nums[i]==1) count_w++;
            else count_b++;
        }
        for(int i=0; i<count_r; i++) nums[i]=0;
        for(int i=count_r; i<count_r + count_w; i++) nums[i]=1;
        for(int i=count_r + count_w; i<n; i++) nums[i]=2;
        
    }
};

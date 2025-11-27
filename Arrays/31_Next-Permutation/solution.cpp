class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot=-1;
        int n=nums.size();
        //find the pivot
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                pivot = i;
                break;
            }
        }
        if(pivot==-1){
            reverse(nums.begin(), nums.end());
            return;
        }
        //swap pivot with next larger element
        for(int i=n-1; i>pivot; i--){
            if(nums[i] > nums[pivot]){
                swap(nums[i], nums[pivot]);
                break;
            }
        }
        //reverse (pivot+1) to n-1
        //reverse(nums.begin()+pivot+1, A.end())
        int l=(pivot+1), r=(n-1);
        while(l<=r){
            swap(nums[l],nums[r]);
            l++;
            r--;
        }
    }
};

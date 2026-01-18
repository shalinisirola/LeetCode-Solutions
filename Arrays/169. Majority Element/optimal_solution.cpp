// Moore's Voting Algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int el = nums[0];
        for(int i=1; i<n; i++){
            if(count==0){
                el = nums[i];
            }
            if(nums[i]==el){
                count++;
            }
            else{
                count--;
            }
        }
        int count_el=0;
        for(int i=0; i<n; i++){
            if(nums[i]==el) count_el++;
        }
        if(count_el > n/2){
            return el;
        }
        return -1;
    }
};

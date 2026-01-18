class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> m;
        int n= nums.size();
        for(int i=0; i<n; i++){
            int first=nums[i];
            int sec = target-first;

            if(m.find(sec)!=m.end()){
                result.push_back(i);
                result.push_back(m[sec]);
                break;
            }
          m[first] = i;
        }
        return result;
        
    }
};

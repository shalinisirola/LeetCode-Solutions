class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        int l=0, r=n-1;
        vector<pair<int,int>> arr;
        for(int i=0; i<n; i++){
            arr.push_back({nums[i], i});
        }
        sort(arr.begin(), arr.end());
        while(l < r){
            if(arr[l].first + arr[r].first < target) l++;
            else if(arr[l].first + arr[r].first > target) r--;
            else{
                return {arr[l].second, arr[r].second};
            }
        }
           
        return {};
    }
};

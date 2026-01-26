class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int lcs = 1;
        unordered_set<int> st;

        if(n == 0) return 0;

        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }
        for(auto it : st){
            if(st.find(it - 1) == st.end()){
                int x = it;
                int currCount = 1;
                while(st.find(x+1) != st.end()){
                    x = x + 1;
                    currCount += 1;
                }
                lcs = max(lcs, currCount);
            }
        }
        return lcs;
    }
};

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0;
        vector<int> temp;
        for(i=0; i<m; i++){
            temp.push_back(nums1[i]);
        }
        for(i=0; i<n; i++){
            temp.push_back(nums2[i]);
        }
        sort(temp.begin(), temp.end());
        for(i=0; i<m+n; i++){
            nums1[i]=temp[i];
        }
        
    }
};

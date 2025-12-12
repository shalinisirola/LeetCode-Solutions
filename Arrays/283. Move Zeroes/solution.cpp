class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int i=0, count=0;
        int n=arr.size();
        for(int j=0; j<n; j++){
            if(arr[j]!=0){
                arr[i++]=arr[j];
            }
            else{
                count++;
            }
        }
        while(count!=0){
            arr[i++]=0;
            count--;
        }
        
    }
};

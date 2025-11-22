int maximizeExpressionOfThree(int* nums, int numsSize) {
    int a = INT_MIN;    
    int b = INT_MIN;    
    int c = INT_MAX;     

    for (int i = 0; i < numsSize; i++) {
        int x = nums[i];

        if (x > a) {
            b = a;
            a = x;
        } 
        else if (x > b) {
            b = x;
        }

        if (x < c) {
            c = x;
        }
    }

    long long result = (long long)a + b - c;  
    return (int)result;
}

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int total = numsSize * 2;
    int *ans = malloc(total * sizeof(int));
    if (!ans) {
        *returnSize = 0;
        return NULL;
    }

    for (int i = 0; i < numsSize; ++i) {
        ans[i] = nums[i];
        ans[i + numsSize] = nums[i];
    }

    *returnSize = total;
    return ans;
}

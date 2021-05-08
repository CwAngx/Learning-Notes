//leetcode 1-------------------------------------------------------
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i = 0;
    for (i = 0;i < numsSize;i++)
    {
        int j = 1;//每次循环都要重新初始化一次
        while (i + j < numsSize)
        {
            if (nums[i] + nums[i + j] != target)
            {
                j++;
            }
            else if (nums[i] + nums[i + j] == target)
            {
                int* ret = (int*)malloc(sizeof(int) * 2);
                ret[0] = i;
                ret[1] = j + i;
                *returnSize = 2;
                return ret;
            }
        }
    }
    return NULL;
}
int searchInsert(int* nums, int numsSize, int target) {//target目标值
    int left = 0, right = numsSize - 1, ans = numsSize;//ans用来定位插入下标
    while (left <= right) {
        int mid = ((right - left) >> 1) + left;//初始化中间值下标 
        //int mid=(right+left)/2;
        if (target <= nums[mid]) {
            ans = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;//不用重新赋值ans是因为ans放在最大值，如果target大于nums,mid就会往右边走
        }
    }
    return ans;
}
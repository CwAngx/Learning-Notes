#include<stdio.h>
int binary_search(int arr[], int k, int sz)//k是希望找到的数字
    //sz是数组里的元素个数：sz=sizeof(arr)/sizeof(arr[0])
    //不能在函数里面写是因为实参传过来的是地址（如果数组是10000个元素，很浪费空间）
{
    //算法的实现
    int left = 0;
    int right = sz - 1;//下标

    while (left <= right)
    {
        int mid = (left + right) / 2;//寻找中间值的下标，注意这个一定要放在while里面，因为每次二分查找都要确定一次中间值的位置
        if (arr[mid] < k)
        {
            left = mid + 1;
        }
        else if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            return mid;//返回下标值
        }
    }
    return -1;
}
//二分查找，找到了返回下标，找不到返回-1
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int k =7;
    int sz = sizeof(arr) / sizeof(arr[0]);

    int ret = binary_search(arr, k, sz);
    if (ret == -1) {
        printf("找不到");
    }
    else {
        printf("找到了下标是 %d\n", ret);
    }
    return 0;
}
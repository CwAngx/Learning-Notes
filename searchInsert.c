int searchInsert(int* nums, int numsSize, int target) {//targetĿ��ֵ
    int left = 0, right = numsSize - 1, ans = numsSize;//ans������λ�����±�
    while (left <= right) {
        int mid = ((right - left) >> 1) + left;//��ʼ���м�ֵ�±� 
        //int mid=(right+left)/2;
        if (target <= nums[mid]) {
            ans = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;//�������¸�ֵans����Ϊans�������ֵ�����target����nums,mid�ͻ����ұ���
        }
    }
    return ans;
}
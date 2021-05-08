//leetcode 1486-----------------------
//数组异或操作
int xorOperation(int n, int start) {
    int i = 0;
    int j = 0;
    for (i = 0;i < n;i++)
    {
        int  r = start + 2 * i;
        j = j ^ r;
    }
    return j;
}
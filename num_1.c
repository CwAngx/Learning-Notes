//统计num的补码中有多少个1
#include<stdio.h>
int main()
{
	int num = 0;
	scanf("%d",&num);
	int i = 0;
	int count = 0;
	for (i = 0;i < 32;i++)
	{
		if (1 == ((num >> i) & 1))
			count++;
	}
	printf("num的补码中有 %d 个1",count);
	return 0;
}
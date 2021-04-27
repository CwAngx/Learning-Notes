#include<stdlib.h>
#include<string.h>
#include<errno.h>
int main()
{
	//向内存申请10个整形的空间
	int* p = (int*)malloc(INT_MAX);
	if (p == NULL)
	{
		//打印错误原因
		printf("%s\n",strerror(errno));
	}
	else
	{
		//正常使用空间
		int i = 0;
		for (i = 0;i < 10;i++)
		{
			*(p + i) = i;
		}
		//1.如果p指向的空间后面有足够的空间，则可以直接追加，返回p
		//2.如果p指向的空间后面没有足够的空间，则realloc函数会重新找一个新的内存区域，
		//开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间，最后返回新开辟的内存空间地址
		//3.如果realloc函数开辟失败，返回NULL，所以最好先让来存放realloc的返回值
		int* ret = (int *)realloc(p, 80);
		if(ret !=NULL)
		p = ret;
		for (i = 10;i < 20;i++)
		{
			*(p + i) = i;
		}
		for (i = 0;i < 20;i++)
		{
			printf("%d ",*(p+i));
		}
	}
	free(p);
	return 0;
} 
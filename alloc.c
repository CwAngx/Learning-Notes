#include<stdlib.h>
#include<string.h>
#include<errno.h>
int main()
{
	//���ڴ�����10�����εĿռ�
	int* p = (int*)malloc(INT_MAX);
	if (p == NULL)
	{
		//��ӡ����ԭ��
		printf("%s\n",strerror(errno));
	}
	else
	{
		//����ʹ�ÿռ�
		int i = 0;
		for (i = 0;i < 10;i++)
		{
			*(p + i) = i;
		}
		//1.���pָ��Ŀռ�������㹻�Ŀռ䣬�����ֱ��׷�ӣ�����p
		//2.���pָ��Ŀռ����û���㹻�Ŀռ䣬��realloc������������һ���µ��ڴ�����
		//����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ䣬��󷵻��¿��ٵ��ڴ�ռ��ַ
		//3.���realloc��������ʧ�ܣ�����NULL������������������realloc�ķ���ֵ
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
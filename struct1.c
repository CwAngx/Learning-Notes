#include<stdio.h>
#include<stdlib.h>
struct S
{
	int n;
	int arr[];
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));
	ps->n = 100;
	int i = 0;
	for (i = 0;i < 5;i++)
	{
		ps->arr[i] = i;
	}
	struct S* pre =(struct S*) realloc(ps,44);
	if (pre != NULL)
	{
		ps = pre;//0,1,2,3,4
	}
	for (i = 5;i < 10;i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0;i < 10;i++)
	{
		printf("%d ",ps->arr[i]);
	}
	//释放
	free(ps);
	ps = NULL;
	return 0;
}

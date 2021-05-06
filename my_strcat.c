//模拟实现strcat
#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* str)
{
	char* ret = dest;//指向dest的开头位置，方便后续返回dest值
	assert(dest != NULL);
	assert(str != NULL);//断言，检查
	while (*dest !='\0')
	{
		dest++;
	}
	while (*dest++ = *str++)
	{
		;
	}
	return ret;
}
int main()
{

	char a[30] = "hello";
	char b[10] = "world";
	my_strcat(a, b);
	printf("%s\n",a);
	return 0;
}
//ģ��ʵ��strcat
#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* str)
{
	char* ret = dest;//ָ��dest�Ŀ�ͷλ�ã������������destֵ
	assert(dest != NULL);
	assert(str != NULL);//���ԣ����
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
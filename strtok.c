//strtokµÄÊ¹ÓÃ
#include<string.h>
int main()
{
	char arr[] = "asd&&asads.&asd";
	char* p = "&.";
	char* ret = NULL;
	for (ret = strtok(arr, p);ret != NULL;ret = strtok(NULL, p))
	{
		printf("%s ",ret);
	}
	return 0;
}
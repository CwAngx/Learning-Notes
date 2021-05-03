#include<stdio.h>
int main()
{
	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)//运算中整型提升，a的值为-0x4a
		printf("a");
	if (b == 0xb600)//-0x4a00
		printf("b");
	if (c == 0xb6000000)//c无需整型提升
		printf("c");
	return 0;
}

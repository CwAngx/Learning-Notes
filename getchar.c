#include<stdio.h>
int main()
{
    int ch = 0;//getchar默认接受的是一个字符 
    while ((ch = getchar()) != EOF)//EOF end of file 文件结尾，用来结束while循环
    {
       
        printf("%c\n",ch + 32);
        getchar();
    }
    return 0;
}
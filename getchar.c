#include<stdio.h>
int main()
{
    int ch = 0;//getcharĬ�Ͻ��ܵ���һ���ַ� 
    while ((ch = getchar()) != EOF)//EOF end of file �ļ���β����������whileѭ��
    {
       
        printf("%c\n",ch + 32);
        getchar();
    }
    return 0;
}
bool isValid(char * s){
int length=0;//�����ַ�������
while(*(s+length))length++;//��ȡ�ַ�������
char* ptr=(char*)malloc(length/2);//�����ڴ�ռ�
memset(ptr,0,length/2);//��ʼ���ڴ�ռ�
int i,a=0;
for(i=0;i<length;i++)
{
    if((*(s+i)=='(')||(*(s+i)=='{')||(*(s+i)=='['))
    {
        a++;
        *(ptr+a)=*(s+i);
    }
    //'('��')'��ASCIIֵ��1��'['��']'��'{'��'}'��ASCIIֵ��2
    else if((*(s+i)==(*(ptr+a)+1))||(*(s+i)==(*(ptr+a)+2)))
    {
        a--;
    }
    else return 0;
}
if(a)
    return 0;
return 1;
}
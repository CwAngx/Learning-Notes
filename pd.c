int main()
{
	int a[2][5] = { 1,2,3,4,5  ,6,7,8,9,10 };
	printf("%p\n %d\n",a,*(*a+1));
}

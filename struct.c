struct S
{
	int n;
	int arr[];//未知大小的-柔性数组的大小可以调整
};

int main()
{
	struct S s;
	printf("%d\n",sizeof(s));
	return 0;
}
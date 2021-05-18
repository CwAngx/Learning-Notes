#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d%d", &n, &m);
	int a1[n][m];
	int a2[n][m];
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &a1[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &a2[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (a1[i][j] != a2[i][j])
				break;
		}
	}
	if (i == n && j == m)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
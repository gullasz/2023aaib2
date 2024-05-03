#include <stdio.h>
int main()
{
	int m,n,a[30][30];
	scanf("%d%d",&n,&m);
	printf("\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}

#include <stdio.h>
int main()
{
	int m,n,a[30][30];
	scanf("%d%d",&m,&n);
	printf("\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int j=0;j<n;j++)
	{
		for(int i=m-1;i>=0;i--)
		{
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
}

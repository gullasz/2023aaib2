#include <stdio.h>
int main()
{
	int a[100],i=0;
	while(1)
	{	
		scanf("%d",&a[i]);
		if(a[i]==0) break;
		i++;
	}
	while(i>0)
	{
		printf("%d ",a[i-1]);
		i--;
	}
	printf("\n");
}
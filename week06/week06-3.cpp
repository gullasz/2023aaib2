#include <stdio.h>
int main()
{
	int a,b,n,i;
	scanf("%d%d%d",&a,&b,&n);
	printf("%d",a);
	for(i=1;i<n;i++)
	{
		a+=b;
		printf(",%d",a);
	}
}

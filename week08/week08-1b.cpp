#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{	
		for(int k=1;k<=n;k++)
		{	
			int space=n-i;
			if(k<=space) printf(" ");
			else printf("*");
		}
		printf("i:%d\n",i);
	}
}
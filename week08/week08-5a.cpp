#include <stdio.h>
int main()
{
	int N,a;
	float ans=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d",&a);
		ans+=a;
	}
	printf("%.2f",ans/N);
}

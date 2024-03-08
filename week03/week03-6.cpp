
#include <stdio.h>
int main()
{
	int ans=1,N;
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
		ans*=i;
	printf("%d",ans);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	scanf("%s",a);
	int N=strlen(a),bad;
	for(int i=0;i<N;i++)
	{
		if(a[i]!=a[N-1-i])
		{
			bad=1;
		}
	}
	if(bad==1)printf("NO\n");
	else printf("YES\n");
}

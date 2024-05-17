#include <stdio.h>
int main()
{
	char c[10];
	scanf("%s",c);
	if(c[0]==c[3] && c[1]==c[2])printf("YES\n");
	else printf("NO\n");
}


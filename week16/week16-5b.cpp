#include <stdio.h>
#include <string.h>
int main()
{
	char a[999];
	scanf("%s",a);
	int N=strlen(a);
	for(int i=0;i<N;i++)
	{	
		char c=a[i];
		if(c>='A' && c<='Z')c=c-'A'+'a';
		else if(c>='a' && c<='z')c=c-'a'+'A';
		printf("%c",c);
	}
	printf("\n");
}

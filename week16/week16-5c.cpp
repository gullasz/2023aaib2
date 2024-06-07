#include <stdio.h>
#include <string.h>
int main()
{
	char s[999];
	scanf("%s",s);
	int n=strlen(s),a[6]={0,0,0,0,0,0};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(s[i]=='1'+j)a[j]++;
		}
	}
	for(int i=0;i<6;i++)
	{
		printf("%d:%d\n",i+1,a[i]);
	}
}
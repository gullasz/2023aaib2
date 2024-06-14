#include <stdio.h>
int main()
{
	int a[10];
	for(int i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<6;i++)
	{
		
		for(int j=i+1;j<6;j++)
		{
			if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}		
		}
	}
	printf("%d",a[0]-a[5]);
}
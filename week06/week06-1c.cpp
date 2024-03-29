# include <stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
    	int star=i,space=N-star;
        for(j=0;j<space;j++)
        	printf(" ");
        for(j=0;j<star;j++)
        	printf("*");
        printf("\n");
    }
}
